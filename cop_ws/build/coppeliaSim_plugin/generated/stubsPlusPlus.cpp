
// include this file after calling the SIM_PLUGIN(...) macro

SIM_DLLEXPORT void simRobomaster_create(create_in *in, create_out *out)
{
    sim::plugin->create(in, out);
}
SIM_DLLEXPORT void simRobomaster_create_ep(create_ep_in *in, create_ep_out *out)
{
    sim::plugin->create_ep(in, out);
}
SIM_DLLEXPORT void simRobomaster_create_s1(create_s1_in *in, create_s1_out *out)
{
    sim::plugin->create_s1(in, out);
}
SIM_DLLEXPORT void simRobomaster_set_target_twist(set_target_twist_in *in, set_target_twist_out *out)
{
    sim::plugin->set_target_twist(in, out);
}
SIM_DLLEXPORT void simRobomaster_get_twist(get_twist_in *in, get_twist_out *out)
{
    sim::plugin->get_twist(in, out);
}
SIM_DLLEXPORT void simRobomaster_get_wheel_speeds(get_wheel_speeds_in *in, get_wheel_speeds_out *out)
{
    sim::plugin->get_wheel_speeds(in, out);
}
SIM_DLLEXPORT void simRobomaster_set_target_wheel_speeds(set_target_wheel_speeds_in *in, set_target_wheel_speeds_out *out)
{
    sim::plugin->set_target_wheel_speeds(in, out);
}
SIM_DLLEXPORT void simRobomaster_get_odometry(get_odometry_in *in, get_odometry_out *out)
{
    sim::plugin->get_odometry(in, out);
}
SIM_DLLEXPORT void simRobomaster_get_imu(get_imu_in *in, get_imu_out *out)
{
    sim::plugin->get_imu(in, out);
}
SIM_DLLEXPORT void simRobomaster_get_attitude(get_attitude_in *in, get_attitude_out *out)
{
    sim::plugin->get_attitude(in, out);
}
SIM_DLLEXPORT void simRobomaster_move_to(move_to_in *in, move_to_out *out)
{
    sim::plugin->move_to(in, out);
}
SIM_DLLEXPORT void simRobomaster_get_action_state(get_action_state_in *in, get_action_state_out *out)
{
    sim::plugin->get_action_state(in, out);
}
SIM_DLLEXPORT void simRobomaster_set_led_effect(set_led_effect_in *in, set_led_effect_out *out)
{
    sim::plugin->set_led_effect(in, out);
}
SIM_DLLEXPORT void simRobomaster_set_gripper_target(set_gripper_target_in *in, set_gripper_target_out *out)
{
    sim::plugin->set_gripper_target(in, out);
}
SIM_DLLEXPORT void simRobomaster_get_gripper(get_gripper_in *in, get_gripper_out *out)
{
    sim::plugin->get_gripper(in, out);
}
SIM_DLLEXPORT void simRobomaster_get_arm_position(get_arm_position_in *in, get_arm_position_out *out)
{
    sim::plugin->get_arm_position(in, out);
}
SIM_DLLEXPORT void simRobomaster_move_arm(move_arm_in *in, move_arm_out *out)
{
    sim::plugin->move_arm(in, out);
}
SIM_DLLEXPORT void simRobomaster_enable_camera(enable_camera_in *in, enable_camera_out *out)
{
    sim::plugin->enable_camera(in, out);
}
SIM_DLLEXPORT void simRobomaster_move_gimbal(move_gimbal_in *in, move_gimbal_out *out)
{
    sim::plugin->move_gimbal(in, out);
}
SIM_DLLEXPORT void simRobomaster_get_gimbal_angles(get_gimbal_angles_in *in, get_gimbal_angles_out *out)
{
    sim::plugin->get_gimbal_angles(in, out);
}
SIM_DLLEXPORT void simRobomaster_set_gimbal_target_speeds(set_gimbal_target_speeds_in *in, set_gimbal_target_speeds_out *out)
{
    sim::plugin->set_gimbal_target_speeds(in, out);
}
SIM_DLLEXPORT void simRobomaster_get_servo_angle(get_servo_angle_in *in, get_servo_angle_out *out)
{
    sim::plugin->get_servo_angle(in, out);
}
SIM_DLLEXPORT void simRobomaster_enable_gimbal(enable_gimbal_in *in, enable_gimbal_out *out)
{
    sim::plugin->enable_gimbal(in, out);
}
SIM_DLLEXPORT void simRobomaster_set_blaster_led(set_blaster_led_in *in, set_blaster_led_out *out)
{
    sim::plugin->set_blaster_led(in, out);
}
SIM_DLLEXPORT void simRobomaster_move_servo(move_servo_in *in, move_servo_out *out)
{
    sim::plugin->move_servo(in, out);
}
SIM_DLLEXPORT void simRobomaster_set_servo_target_speed(set_servo_target_speed_in *in, set_servo_target_speed_out *out)
{
    sim::plugin->set_servo_target_speed(in, out);
}
SIM_DLLEXPORT void simRobomaster_set_servo_mode(set_servo_mode_in *in, set_servo_mode_out *out)
{
    sim::plugin->set_servo_mode(in, out);
}
SIM_DLLEXPORT void simRobomaster_enable_servo(enable_servo_in *in, enable_servo_out *out)
{
    sim::plugin->enable_servo(in, out);
}
SIM_DLLEXPORT void simRobomaster_set_mode(set_mode_in *in, set_mode_out *out)
{
    sim::plugin->set_mode(in, out);
}
SIM_DLLEXPORT void simRobomaster_enable_distance_sensor(enable_distance_sensor_in *in, enable_distance_sensor_out *out)
{
    sim::plugin->enable_distance_sensor(in, out);
}
SIM_DLLEXPORT void simRobomaster_disable_distance_sensor(disable_distance_sensor_in *in, disable_distance_sensor_out *out)
{
    sim::plugin->disable_distance_sensor(in, out);
}
SIM_DLLEXPORT void simRobomaster_get_distance_reading(get_distance_reading_in *in, get_distance_reading_out *out)
{
    sim::plugin->get_distance_reading(in, out);
}
SIM_DLLEXPORT void simRobomaster_set_log_level(set_log_level_in *in, set_log_level_out *out)
{
    sim::plugin->set_log_level(in, out);
}
SIM_DLLEXPORT void simRobomaster_get_handles(get_handles_in *in, get_handles_out *out)
{
    sim::plugin->get_handles(in, out);
}
SIM_DLLEXPORT void simRobomaster_set_vision_class(set_vision_class_in *in, set_vision_class_out *out)
{
    sim::plugin->set_vision_class(in, out);
}
SIM_DLLEXPORT void simRobomaster_configure_vision(configure_vision_in *in, configure_vision_out *out)
{
    sim::plugin->configure_vision(in, out);
}
SIM_DLLEXPORT void simRobomaster_enable_vision(enable_vision_in *in, enable_vision_out *out)
{
    sim::plugin->enable_vision(in, out);
}
SIM_DLLEXPORT void simRobomaster_get_detected_robots(get_detected_robots_in *in, get_detected_robots_out *out)
{
    sim::plugin->get_detected_robots(in, out);
}
SIM_DLLEXPORT void simRobomaster_get_detected_people(get_detected_people_in *in, get_detected_people_out *out)
{
    sim::plugin->get_detected_people(in, out);
}

