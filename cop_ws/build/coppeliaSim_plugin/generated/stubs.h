#ifndef STUBS_H__INCLUDED
#define STUBS_H__INCLUDED

#include <simLib/simExp.h>
#include <simPlusPlus/Lib.h>
#include <simStubsGen/cpp/common.h>
#include <string>
#include <vector>
#include <boost/algorithm/string.hpp>
#include <boost/assign/list_of.hpp>
#include <boost/format.hpp>

class FuncTracer
{
    int l_;
    std::string f_;
public:
    FuncTracer(const std::string &f, int l = sim_verbosity_trace);
    ~FuncTracer();
};

#ifndef __FUNC__
#ifdef __PRETTY_FUNCTION__
#define __FUNC__ __PRETTY_FUNCTION__
#else
#define __FUNC__ __func__
#endif
#endif // __FUNC__

#define TRACE_FUNC FuncTracer __funcTracer__##__LINE__((boost::format("%s:%d:%s:") % __FILE__ % __LINE__ % __FUNC__).str())

#ifdef QT_COMPIL
#include <QThread>

extern Qt::HANDLE UI_THREAD;
extern Qt::HANDLE SIM_THREAD;

std::string threadNickname();
void uiThread();
void simThread();

#define ASSERT_THREAD(ID) \
    if(UI_THREAD == NULL) {\
        sim::addLog(sim_verbosity_debug, "warning: cannot check ASSERT_THREAD(" #ID ") because global variable UI_THREAD is not set yet.");\
    } else if(strcmp(#ID, "UI") == 0) {\
        if(QThread::currentThreadId() != UI_THREAD) {\
            sim::addLog(sim_verbosity_errors, "%s:%d %s should be called from UI thread", __FILE__, __LINE__, __FUNC__);\
            exit(1);\
        }\
    } else if(strcmp(#ID, "!UI") == 0) {\
        if(QThread::currentThreadId() == UI_THREAD) {\
            sim::addLog(sim_verbosity_errors, "%s:%d %s should NOT be called from UI thread", __FILE__, __LINE__, __FUNC__);\
            exit(1);\
        }\
    } else {\
        sim::addLog(sim_verbosity_debug, "warning: cannot check ASSERT_THREAD(" #ID "). Can check only UI and !UI.");\
    }
#endif // QT_COMPIL

struct CS_Twist2D
{
    float x;
    float y;
    float theta;

    CS_Twist2D();
    CS_Twist2D(const float &x_, const float &y_, const float &theta_) : x(x_), y(y_), theta(theta_) {}
};

void readFromStack(int stack, CS_Twist2D *value, const ReadOptions &rdopt = {});
void writeToStack(const CS_Twist2D &value, int stack, const WriteOptions &wropt = {});
struct CS_Pose2D
{
    float x;
    float y;
    float theta;

    CS_Pose2D();
    CS_Pose2D(const float &x_, const float &y_, const float &theta_) : x(x_), y(y_), theta(theta_) {}
};

void readFromStack(int stack, CS_Pose2D *value, const ReadOptions &rdopt = {});
void writeToStack(const CS_Pose2D &value, int stack, const WriteOptions &wropt = {});
struct CS_WheelFloatValues
{
    float front_left;
    float front_right;
    float rear_left;
    float rear_right;

    CS_WheelFloatValues();
    CS_WheelFloatValues(const float &front_left_, const float &front_right_, const float &rear_left_, const float &rear_right_) : front_left(front_left_), front_right(front_right_), rear_left(rear_left_), rear_right(rear_right_) {}
};

void readFromStack(int stack, CS_WheelFloatValues *value, const ReadOptions &rdopt = {});
void writeToStack(const CS_WheelFloatValues &value, int stack, const WriteOptions &wropt = {});
struct CS_Odometry
{
    CS_Pose2D pose;
    CS_Twist2D twist;

    CS_Odometry();
    CS_Odometry(const CS_Pose2D &pose_, const CS_Twist2D &twist_) : pose(pose_), twist(twist_) {}
};

void readFromStack(int stack, CS_Odometry *value, const ReadOptions &rdopt = {});
void writeToStack(const CS_Odometry &value, int stack, const WriteOptions &wropt = {});
struct CS_Vector3
{
    float x;
    float y;
    float z;

    CS_Vector3();
    CS_Vector3(const float &x_, const float &y_, const float &z_) : x(x_), y(y_), z(z_) {}
};

void readFromStack(int stack, CS_Vector3 *value, const ReadOptions &rdopt = {});
void writeToStack(const CS_Vector3 &value, int stack, const WriteOptions &wropt = {});
struct CS_IMU
{
    CS_Vector3 angular_velocity;
    CS_Vector3 acceleration;

    CS_IMU();
    CS_IMU(const CS_Vector3 &angular_velocity_, const CS_Vector3 &acceleration_) : angular_velocity(angular_velocity_), acceleration(acceleration_) {}
};

void readFromStack(int stack, CS_IMU *value, const ReadOptions &rdopt = {});
void writeToStack(const CS_IMU &value, int stack, const WriteOptions &wropt = {});
struct CS_Attitude
{
    float yaw;
    float pitch;
    float roll;

    CS_Attitude();
    CS_Attitude(const float &yaw_, const float &pitch_, const float &roll_) : yaw(yaw_), pitch(pitch_), roll(roll_) {}
};

void readFromStack(int stack, CS_Attitude *value, const ReadOptions &rdopt = {});
void writeToStack(const CS_Attitude &value, int stack, const WriteOptions &wropt = {});
struct CS_BoundingBox
{
    int handle;
    float x;
    float y;
    float width;
    float height;

    CS_BoundingBox();
    CS_BoundingBox(const int &handle_, const float &x_, const float &y_, const float &width_, const float &height_) : handle(handle_), x(x_), y(y_), width(width_), height(height_) {}
};

void readFromStack(int stack, CS_BoundingBox *value, const ReadOptions &rdopt = {});
void writeToStack(const CS_BoundingBox &value, int stack, const WriteOptions &wropt = {});

bool registerScriptStuff();

enum VISION
{
    simrobomaster_PERSON = 1,
    simrobomaster_ROBOT = 7,
};

const char* vision_string(VISION x);

struct create_in
{
    SScriptCallBack _;
    int handle;
    std::string remote_api_network;
    std::string serial_number;
    bool camera_use_udp;
    int camera_bitrate;
    bool enable_camera;
    bool enable_gripper;
    bool enable_arm;
    bool enable_gimbal;
    bool enable_vision;

    create_in();
};

struct create_out
{
    int handle;

    create_out();
};

void create_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_create(create_in *in, create_out *out);

struct create_ep_in
{
    SScriptCallBack _;
    int handle;
    std::string remote_api_network;
    std::string serial_number;

    create_ep_in();
};

struct create_ep_out
{
    int handle;

    create_ep_out();
};

void create_ep_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_create_ep(create_ep_in *in, create_ep_out *out);

struct create_s1_in
{
    SScriptCallBack _;
    int handle;
    std::string remote_api_network;
    std::string serial_number;

    create_s1_in();
};

struct create_s1_out
{
    int handle;

    create_s1_out();
};

void create_s1_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_create_s1(create_s1_in *in, create_s1_out *out);

struct set_target_twist_in
{
    SScriptCallBack _;
    int handle;
    CS_Twist2D twist;

    set_target_twist_in();
};

struct set_target_twist_out
{

    set_target_twist_out();
};

void set_target_twist_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_set_target_twist(set_target_twist_in *in, set_target_twist_out *out);

struct get_twist_in
{
    SScriptCallBack _;
    int handle;

    get_twist_in();
};

struct get_twist_out
{
    CS_Twist2D twist;

    get_twist_out();
};

void get_twist_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_get_twist(get_twist_in *in, get_twist_out *out);

struct get_wheel_speeds_in
{
    SScriptCallBack _;
    int handle;

    get_wheel_speeds_in();
};

struct get_wheel_speeds_out
{
    CS_WheelFloatValues speeds;

    get_wheel_speeds_out();
};

void get_wheel_speeds_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_get_wheel_speeds(get_wheel_speeds_in *in, get_wheel_speeds_out *out);

struct set_target_wheel_speeds_in
{
    SScriptCallBack _;
    int handle;
    CS_WheelFloatValues speeds;

    set_target_wheel_speeds_in();
};

struct set_target_wheel_speeds_out
{

    set_target_wheel_speeds_out();
};

void set_target_wheel_speeds_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_set_target_wheel_speeds(set_target_wheel_speeds_in *in, set_target_wheel_speeds_out *out);

struct get_odometry_in
{
    SScriptCallBack _;
    int handle;

    get_odometry_in();
};

struct get_odometry_out
{
    CS_Odometry odometry;

    get_odometry_out();
};

void get_odometry_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_get_odometry(get_odometry_in *in, get_odometry_out *out);

struct get_imu_in
{
    SScriptCallBack _;
    int handle;

    get_imu_in();
};

struct get_imu_out
{
    CS_IMU imu;

    get_imu_out();
};

void get_imu_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_get_imu(get_imu_in *in, get_imu_out *out);

struct get_attitude_in
{
    SScriptCallBack _;
    int handle;

    get_attitude_in();
};

struct get_attitude_out
{
    CS_Attitude attitude;

    get_attitude_out();
};

void get_attitude_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_get_attitude(get_attitude_in *in, get_attitude_out *out);

struct move_to_in
{
    SScriptCallBack _;
    int handle;
    CS_Pose2D pose;
    float linear_speed;
    float angular_speed;

    move_to_in();
};

struct move_to_out
{
    int handle;

    move_to_out();
};

void move_to_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_move_to(move_to_in *in, move_to_out *out);

struct get_action_state_in
{
    SScriptCallBack _;
    int handle;
    int action;

    get_action_state_in();
};

struct get_action_state_out
{
    std::string status;

    get_action_state_out();
};

void get_action_state_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_get_action_state(get_action_state_in *in, get_action_state_out *out);

struct set_led_effect_in
{
    SScriptCallBack _;
    int handle;
    float r;
    float g;
    float b;
    std::string effect;
    int mask;
    int led_mask;
    float period_on;
    float period_off;
    bool loop;

    set_led_effect_in();
};

struct set_led_effect_out
{

    set_led_effect_out();
};

void set_led_effect_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_set_led_effect(set_led_effect_in *in, set_led_effect_out *out);

struct set_gripper_target_in
{
    SScriptCallBack _;
    int handle;
    std::string state;
    float power;

    set_gripper_target_in();
};

struct set_gripper_target_out
{

    set_gripper_target_out();
};

void set_gripper_target_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_set_gripper_target(set_gripper_target_in *in, set_gripper_target_out *out);

struct get_gripper_in
{
    SScriptCallBack _;
    int handle;

    get_gripper_in();
};

struct get_gripper_out
{
    std::string state;

    get_gripper_out();
};

void get_gripper_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_get_gripper(get_gripper_in *in, get_gripper_out *out);

struct get_arm_position_in
{
    SScriptCallBack _;
    int handle;

    get_arm_position_in();
};

struct get_arm_position_out
{
    CS_Vector3 position;

    get_arm_position_out();
};

void get_arm_position_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_get_arm_position(get_arm_position_in *in, get_arm_position_out *out);

struct move_arm_in
{
    SScriptCallBack _;
    int handle;
    float x;
    float z;
    bool absolute;

    move_arm_in();
};

struct move_arm_out
{
    int handle;

    move_arm_out();
};

void move_arm_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_move_arm(move_arm_in *in, move_arm_out *out);

struct enable_camera_in
{
    SScriptCallBack _;
    int handle;
    bool enabled;
    std::string resolution;

    enable_camera_in();
};

struct enable_camera_out
{

    enable_camera_out();
};

void enable_camera_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_enable_camera(enable_camera_in *in, enable_camera_out *out);

struct move_gimbal_in
{
    SScriptCallBack _;
    int handle;
    float yaw;
    float pitch;
    float yaw_speed;
    float pitch_speed;
    std::string yaw_frame;
    std::string pitch_frame;

    move_gimbal_in();
};

struct move_gimbal_out
{
    int handle;

    move_gimbal_out();
};

void move_gimbal_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_move_gimbal(move_gimbal_in *in, move_gimbal_out *out);

struct get_gimbal_angles_in
{
    SScriptCallBack _;
    int handle;
    std::string yaw_frame;
    std::string pitch_frame;

    get_gimbal_angles_in();
};

struct get_gimbal_angles_out
{
    float yaw;
    float pitch;

    get_gimbal_angles_out();
};

void get_gimbal_angles_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_get_gimbal_angles(get_gimbal_angles_in *in, get_gimbal_angles_out *out);

struct set_gimbal_target_speeds_in
{
    SScriptCallBack _;
    int handle;
    float yaw;
    float pitch;

    set_gimbal_target_speeds_in();
};

struct set_gimbal_target_speeds_out
{

    set_gimbal_target_speeds_out();
};

void set_gimbal_target_speeds_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_set_gimbal_target_speeds(set_gimbal_target_speeds_in *in, set_gimbal_target_speeds_out *out);

struct get_servo_angle_in
{
    SScriptCallBack _;
    int handle;
    int servo;

    get_servo_angle_in();
};

struct get_servo_angle_out
{
    float angle;

    get_servo_angle_out();
};

void get_servo_angle_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_get_servo_angle(get_servo_angle_in *in, get_servo_angle_out *out);

struct enable_gimbal_in
{
    SScriptCallBack _;
    int handle;
    bool value;

    enable_gimbal_in();
};

struct enable_gimbal_out
{

    enable_gimbal_out();
};

void enable_gimbal_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_enable_gimbal(enable_gimbal_in *in, enable_gimbal_out *out);

struct set_blaster_led_in
{
    SScriptCallBack _;
    int handle;
    float intensity;

    set_blaster_led_in();
};

struct set_blaster_led_out
{

    set_blaster_led_out();
};

void set_blaster_led_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_set_blaster_led(set_blaster_led_in *in, set_blaster_led_out *out);

struct move_servo_in
{
    SScriptCallBack _;
    int handle;
    int servo;
    float angle;

    move_servo_in();
};

struct move_servo_out
{
    int handle;

    move_servo_out();
};

void move_servo_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_move_servo(move_servo_in *in, move_servo_out *out);

struct set_servo_target_speed_in
{
    SScriptCallBack _;
    int handle;
    int servo;
    float speed;

    set_servo_target_speed_in();
};

struct set_servo_target_speed_out
{

    set_servo_target_speed_out();
};

void set_servo_target_speed_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_set_servo_target_speed(set_servo_target_speed_in *in, set_servo_target_speed_out *out);

struct set_servo_mode_in
{
    SScriptCallBack _;
    int handle;
    int servo;
    std::string mode;

    set_servo_mode_in();
};

struct set_servo_mode_out
{

    set_servo_mode_out();
};

void set_servo_mode_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_set_servo_mode(set_servo_mode_in *in, set_servo_mode_out *out);

struct enable_servo_in
{
    SScriptCallBack _;
    int handle;
    int servo;
    bool value;

    enable_servo_in();
};

struct enable_servo_out
{

    enable_servo_out();
};

void enable_servo_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_enable_servo(enable_servo_in *in, enable_servo_out *out);

struct set_mode_in
{
    SScriptCallBack _;
    int handle;
    std::string mode;

    set_mode_in();
};

struct set_mode_out
{

    set_mode_out();
};

void set_mode_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_set_mode(set_mode_in *in, set_mode_out *out);

struct enable_distance_sensor_in
{
    SScriptCallBack _;
    int handle;
    int port;
    int sensor_handle;

    enable_distance_sensor_in();
};

struct enable_distance_sensor_out
{

    enable_distance_sensor_out();
};

void enable_distance_sensor_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_enable_distance_sensor(enable_distance_sensor_in *in, enable_distance_sensor_out *out);

struct disable_distance_sensor_in
{
    SScriptCallBack _;
    int handle;
    int port;

    disable_distance_sensor_in();
};

struct disable_distance_sensor_out
{

    disable_distance_sensor_out();
};

void disable_distance_sensor_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_disable_distance_sensor(disable_distance_sensor_in *in, disable_distance_sensor_out *out);

struct get_distance_reading_in
{
    SScriptCallBack _;
    int handle;
    int port;

    get_distance_reading_in();
};

struct get_distance_reading_out
{
    float distance;

    get_distance_reading_out();
};

void get_distance_reading_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_get_distance_reading(get_distance_reading_in *in, get_distance_reading_out *out);

struct set_log_level_in
{
    SScriptCallBack _;
    std::string log_level;

    set_log_level_in();
};

struct set_log_level_out
{

    set_log_level_out();
};

void set_log_level_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_set_log_level(set_log_level_in *in, set_log_level_out *out);

struct get_handles_in
{
    SScriptCallBack _;

    get_handles_in();
};

struct get_handles_out
{
    std::vector< int > handles;

    get_handles_out();
};

void get_handles_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_get_handles(get_handles_in *in, get_handles_out *out);

struct set_vision_class_in
{
    SScriptCallBack _;
    int handle;
    std::string name;
    int type;

    set_vision_class_in();
};

struct set_vision_class_out
{

    set_vision_class_out();
};

void set_vision_class_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_set_vision_class(set_vision_class_in *in, set_vision_class_out *out);

struct configure_vision_in
{
    SScriptCallBack _;
    int handle;
    float min_width;
    float min_height;
    float tolerance;

    configure_vision_in();
};

struct configure_vision_out
{

    configure_vision_out();
};

void configure_vision_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_configure_vision(configure_vision_in *in, configure_vision_out *out);

struct enable_vision_in
{
    SScriptCallBack _;
    int handle;
    int mask;

    enable_vision_in();
};

struct enable_vision_out
{

    enable_vision_out();
};

void enable_vision_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_enable_vision(enable_vision_in *in, enable_vision_out *out);

struct get_detected_robots_in
{
    SScriptCallBack _;
    int handle;

    get_detected_robots_in();
};

struct get_detected_robots_out
{
    std::vector< CS_BoundingBox > bounding_boxes;

    get_detected_robots_out();
};

void get_detected_robots_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_get_detected_robots(get_detected_robots_in *in, get_detected_robots_out *out);

struct get_detected_people_in
{
    SScriptCallBack _;
    int handle;

    get_detected_people_in();
};

struct get_detected_people_out
{
    std::vector< CS_BoundingBox > bounding_boxes;

    get_detected_people_out();
};

void get_detected_people_callback(SScriptCallBack *p);
SIM_DLLEXPORT void simRobomaster_get_detected_people(get_detected_people_in *in, get_detected_people_out *out);

// following functions must be implemented in the plugin

void create(SScriptCallBack *p, const char *cmd, create_in *in, create_out *out);
void create_ep(SScriptCallBack *p, const char *cmd, create_ep_in *in, create_ep_out *out);
void create_s1(SScriptCallBack *p, const char *cmd, create_s1_in *in, create_s1_out *out);
void set_target_twist(SScriptCallBack *p, const char *cmd, set_target_twist_in *in, set_target_twist_out *out);
void get_twist(SScriptCallBack *p, const char *cmd, get_twist_in *in, get_twist_out *out);
void get_wheel_speeds(SScriptCallBack *p, const char *cmd, get_wheel_speeds_in *in, get_wheel_speeds_out *out);
void set_target_wheel_speeds(SScriptCallBack *p, const char *cmd, set_target_wheel_speeds_in *in, set_target_wheel_speeds_out *out);
void get_odometry(SScriptCallBack *p, const char *cmd, get_odometry_in *in, get_odometry_out *out);
void get_imu(SScriptCallBack *p, const char *cmd, get_imu_in *in, get_imu_out *out);
void get_attitude(SScriptCallBack *p, const char *cmd, get_attitude_in *in, get_attitude_out *out);
void move_to(SScriptCallBack *p, const char *cmd, move_to_in *in, move_to_out *out);
void get_action_state(SScriptCallBack *p, const char *cmd, get_action_state_in *in, get_action_state_out *out);
void set_led_effect(SScriptCallBack *p, const char *cmd, set_led_effect_in *in, set_led_effect_out *out);
void set_gripper_target(SScriptCallBack *p, const char *cmd, set_gripper_target_in *in, set_gripper_target_out *out);
void get_gripper(SScriptCallBack *p, const char *cmd, get_gripper_in *in, get_gripper_out *out);
void get_arm_position(SScriptCallBack *p, const char *cmd, get_arm_position_in *in, get_arm_position_out *out);
void move_arm(SScriptCallBack *p, const char *cmd, move_arm_in *in, move_arm_out *out);
void enable_camera(SScriptCallBack *p, const char *cmd, enable_camera_in *in, enable_camera_out *out);
void move_gimbal(SScriptCallBack *p, const char *cmd, move_gimbal_in *in, move_gimbal_out *out);
void get_gimbal_angles(SScriptCallBack *p, const char *cmd, get_gimbal_angles_in *in, get_gimbal_angles_out *out);
void set_gimbal_target_speeds(SScriptCallBack *p, const char *cmd, set_gimbal_target_speeds_in *in, set_gimbal_target_speeds_out *out);
void get_servo_angle(SScriptCallBack *p, const char *cmd, get_servo_angle_in *in, get_servo_angle_out *out);
void enable_gimbal(SScriptCallBack *p, const char *cmd, enable_gimbal_in *in, enable_gimbal_out *out);
void set_blaster_led(SScriptCallBack *p, const char *cmd, set_blaster_led_in *in, set_blaster_led_out *out);
void move_servo(SScriptCallBack *p, const char *cmd, move_servo_in *in, move_servo_out *out);
void set_servo_target_speed(SScriptCallBack *p, const char *cmd, set_servo_target_speed_in *in, set_servo_target_speed_out *out);
void set_servo_mode(SScriptCallBack *p, const char *cmd, set_servo_mode_in *in, set_servo_mode_out *out);
void enable_servo(SScriptCallBack *p, const char *cmd, enable_servo_in *in, enable_servo_out *out);
void set_mode(SScriptCallBack *p, const char *cmd, set_mode_in *in, set_mode_out *out);
void enable_distance_sensor(SScriptCallBack *p, const char *cmd, enable_distance_sensor_in *in, enable_distance_sensor_out *out);
void disable_distance_sensor(SScriptCallBack *p, const char *cmd, disable_distance_sensor_in *in, disable_distance_sensor_out *out);
void get_distance_reading(SScriptCallBack *p, const char *cmd, get_distance_reading_in *in, get_distance_reading_out *out);
void set_log_level(SScriptCallBack *p, const char *cmd, set_log_level_in *in, set_log_level_out *out);
void get_handles(SScriptCallBack *p, const char *cmd, get_handles_in *in, get_handles_out *out);
void set_vision_class(SScriptCallBack *p, const char *cmd, set_vision_class_in *in, set_vision_class_out *out);
void configure_vision(SScriptCallBack *p, const char *cmd, configure_vision_in *in, configure_vision_out *out);
void enable_vision(SScriptCallBack *p, const char *cmd, enable_vision_in *in, enable_vision_out *out);
void get_detected_robots(SScriptCallBack *p, const char *cmd, get_detected_robots_in *in, get_detected_robots_out *out);
void get_detected_people(SScriptCallBack *p, const char *cmd, get_detected_people_in *in, get_detected_people_out *out);

#endif // STUBS_H__INCLUDED
