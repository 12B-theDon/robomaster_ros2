#include "stubs.h"
#include <simPlusPlus/Lib.h>
#include <simStubsGen/cpp/common.h>

#include <optional>
#include <cstring>
#include <string>
#include <vector>
#include <set>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <boost/lexical_cast.hpp>

FuncTracer::FuncTracer(const std::string &f, int l)
    : f_(f),
      l_(l)
{
    sim::addLog(l_, f_ + " [enter]");
}

FuncTracer::~FuncTracer()
{
    sim::addLog(l_, f_ + " [leave]");
}

#ifndef NDEBUG

template<typename... Arguments>
void addStubsDebugLog(const std::string &fmt, Arguments&&... args)
{
    if(sim::isStackDebugEnabled())
    {
        auto msg = sim::util::sprintf(fmt, std::forward<Arguments>(args)...);
        sim::addLog(sim_verbosity_debug, "STUBS DEBUG: %s", msg);
    }
}

static void addStubsDebugStackDump(int stackHandle)
{
    if(sim::isStackDebugEnabled())
        sim::debugStack(stackHandle);
}

#else // RELEASE
#define addStubsDebugLog(...)
#define addStubsDebugStackDump(x)
#endif

#ifdef QT_COMPIL

Qt::HANDLE UI_THREAD = NULL;
Qt::HANDLE SIM_THREAD = NULL;

std::string threadNickname()
{
    Qt::HANDLE h = QThread::currentThreadId();
    if(h == UI_THREAD) return "UI";
    if(h == SIM_THREAD) return "SIM";
    std::stringstream ss;
    ss << h;
    return ss.str();
}

void uiThread()
{
    Qt::HANDLE h = QThread::currentThreadId();
    if(UI_THREAD != NULL && UI_THREAD != h)
        sim::addLog(sim_verbosity_warnings, "UI thread has already been set");
    UI_THREAD = h;
}

void simThread()
{
    Qt::HANDLE h = QThread::currentThreadId();
    if(SIM_THREAD != NULL && SIM_THREAD != h)
        sim::addLog(sim_verbosity_warnings, "SIM thread has already been set");
    SIM_THREAD = h;
}

#endif // QT_COMPIL

void readFromStack(int stack, CS_Twist2D *value, const ReadOptions &rdopt)
{
    addStubsDebugLog("readFromStack(CS_Twist2D): begin reading...");
    addStubsDebugStackDump(stack);

    try
    {
        int info = sim::getStackTableInfo(stack, 0);
        if(info != sim_stack_table_map && info != sim_stack_table_empty)
        {
            throw sim::exception("expected a map");
        }

        int oldsz = sim::getStackSize(stack);
        sim::unfoldStackTable(stack);
        int numItems = (sim::getStackSize(stack) - oldsz + 1) / 2;

        std::set<std::string> requiredFields{};

        while(numItems >= 1)
        {
            sim::moveStackItemToTop(stack, oldsz - 1); // move key to top
            std::string key;
            readFromStack(stack, &key);

            sim::moveStackItemToTop(stack, oldsz - 1); // move value to top
            if(0) {}
            else if(key == "x")
            {
                addStubsDebugLog("readFromStack(CS_Twist2D): reading field \"x\" (float)...");
                try
                {
                    readFromStack(stack, &(value->x));
                }
                catch(std::exception &ex)
                {
                    throw sim::exception("field 'x': %s", ex.what());
                }
            }
            else if(key == "y")
            {
                addStubsDebugLog("readFromStack(CS_Twist2D): reading field \"y\" (float)...");
                try
                {
                    readFromStack(stack, &(value->y));
                }
                catch(std::exception &ex)
                {
                    throw sim::exception("field 'y': %s", ex.what());
                }
            }
            else if(key == "theta")
            {
                addStubsDebugLog("readFromStack(CS_Twist2D): reading field \"theta\" (float)...");
                try
                {
                    readFromStack(stack, &(value->theta));
                }
                catch(std::exception &ex)
                {
                    throw sim::exception("field 'theta': %s", ex.what());
                }
            }
            else
            {
                throw sim::exception("unexpected key: %s", key);
            }

            requiredFields.erase(key);
            numItems = (sim::getStackSize(stack) - oldsz + 1) / 2;
        }

        for(const auto &field : requiredFields)
            throw sim::exception("missing required field '%s'", field);
    }
    catch(std::exception &ex)
    {
        throw sim::exception("readFromStack(CS_Twist2D): %s", ex.what());
    }

    addStubsDebugLog("readFromStack(CS_Twist2D): finished reading");
}

void writeToStack(const CS_Twist2D &value, int stack, const WriteOptions &wropt)
{
    addStubsDebugLog("writeToStack(CS_Twist2D): begin writing...");

    try
    {
        sim::pushTableOntoStack(stack);

        addStubsDebugLog("writeToStack(CS_Twist2D): writing field \"x\" (float)...");
        try
        {
            writeToStack(std::string{"x"}, stack);
            writeToStack(value.x, stack);
            sim::insertDataIntoStackTable(stack);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("field 'x': %s", ex.what());
        }
        addStubsDebugLog("writeToStack(CS_Twist2D): writing field \"y\" (float)...");
        try
        {
            writeToStack(std::string{"y"}, stack);
            writeToStack(value.y, stack);
            sim::insertDataIntoStackTable(stack);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("field 'y': %s", ex.what());
        }
        addStubsDebugLog("writeToStack(CS_Twist2D): writing field \"theta\" (float)...");
        try
        {
            writeToStack(std::string{"theta"}, stack);
            writeToStack(value.theta, stack);
            sim::insertDataIntoStackTable(stack);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("field 'theta': %s", ex.what());
        }
    }
    catch(std::exception &ex)
    {
        throw sim::exception("writeToStack(CS_Twist2D): %s", ex.what());
    }

    addStubsDebugLog("writeToStack(CS_Twist2D): finished writing");
}

CS_Twist2D::CS_Twist2D()
{
    x = 0.0;
    y = 0.0;
    theta = 0.0;
}

void readFromStack(int stack, CS_Pose2D *value, const ReadOptions &rdopt)
{
    addStubsDebugLog("readFromStack(CS_Pose2D): begin reading...");
    addStubsDebugStackDump(stack);

    try
    {
        int info = sim::getStackTableInfo(stack, 0);
        if(info != sim_stack_table_map && info != sim_stack_table_empty)
        {
            throw sim::exception("expected a map");
        }

        int oldsz = sim::getStackSize(stack);
        sim::unfoldStackTable(stack);
        int numItems = (sim::getStackSize(stack) - oldsz + 1) / 2;

        std::set<std::string> requiredFields{};

        while(numItems >= 1)
        {
            sim::moveStackItemToTop(stack, oldsz - 1); // move key to top
            std::string key;
            readFromStack(stack, &key);

            sim::moveStackItemToTop(stack, oldsz - 1); // move value to top
            if(0) {}
            else if(key == "x")
            {
                addStubsDebugLog("readFromStack(CS_Pose2D): reading field \"x\" (float)...");
                try
                {
                    readFromStack(stack, &(value->x));
                }
                catch(std::exception &ex)
                {
                    throw sim::exception("field 'x': %s", ex.what());
                }
            }
            else if(key == "y")
            {
                addStubsDebugLog("readFromStack(CS_Pose2D): reading field \"y\" (float)...");
                try
                {
                    readFromStack(stack, &(value->y));
                }
                catch(std::exception &ex)
                {
                    throw sim::exception("field 'y': %s", ex.what());
                }
            }
            else if(key == "theta")
            {
                addStubsDebugLog("readFromStack(CS_Pose2D): reading field \"theta\" (float)...");
                try
                {
                    readFromStack(stack, &(value->theta));
                }
                catch(std::exception &ex)
                {
                    throw sim::exception("field 'theta': %s", ex.what());
                }
            }
            else
            {
                throw sim::exception("unexpected key: %s", key);
            }

            requiredFields.erase(key);
            numItems = (sim::getStackSize(stack) - oldsz + 1) / 2;
        }

        for(const auto &field : requiredFields)
            throw sim::exception("missing required field '%s'", field);
    }
    catch(std::exception &ex)
    {
        throw sim::exception("readFromStack(CS_Pose2D): %s", ex.what());
    }

    addStubsDebugLog("readFromStack(CS_Pose2D): finished reading");
}

void writeToStack(const CS_Pose2D &value, int stack, const WriteOptions &wropt)
{
    addStubsDebugLog("writeToStack(CS_Pose2D): begin writing...");

    try
    {
        sim::pushTableOntoStack(stack);

        addStubsDebugLog("writeToStack(CS_Pose2D): writing field \"x\" (float)...");
        try
        {
            writeToStack(std::string{"x"}, stack);
            writeToStack(value.x, stack);
            sim::insertDataIntoStackTable(stack);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("field 'x': %s", ex.what());
        }
        addStubsDebugLog("writeToStack(CS_Pose2D): writing field \"y\" (float)...");
        try
        {
            writeToStack(std::string{"y"}, stack);
            writeToStack(value.y, stack);
            sim::insertDataIntoStackTable(stack);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("field 'y': %s", ex.what());
        }
        addStubsDebugLog("writeToStack(CS_Pose2D): writing field \"theta\" (float)...");
        try
        {
            writeToStack(std::string{"theta"}, stack);
            writeToStack(value.theta, stack);
            sim::insertDataIntoStackTable(stack);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("field 'theta': %s", ex.what());
        }
    }
    catch(std::exception &ex)
    {
        throw sim::exception("writeToStack(CS_Pose2D): %s", ex.what());
    }

    addStubsDebugLog("writeToStack(CS_Pose2D): finished writing");
}

CS_Pose2D::CS_Pose2D()
{
    x = 0.0;
    y = 0.0;
    theta = 0.0;
}

void readFromStack(int stack, CS_WheelFloatValues *value, const ReadOptions &rdopt)
{
    addStubsDebugLog("readFromStack(CS_WheelFloatValues): begin reading...");
    addStubsDebugStackDump(stack);

    try
    {
        int info = sim::getStackTableInfo(stack, 0);
        if(info != sim_stack_table_map && info != sim_stack_table_empty)
        {
            throw sim::exception("expected a map");
        }

        int oldsz = sim::getStackSize(stack);
        sim::unfoldStackTable(stack);
        int numItems = (sim::getStackSize(stack) - oldsz + 1) / 2;

        std::set<std::string> requiredFields{};

        while(numItems >= 1)
        {
            sim::moveStackItemToTop(stack, oldsz - 1); // move key to top
            std::string key;
            readFromStack(stack, &key);

            sim::moveStackItemToTop(stack, oldsz - 1); // move value to top
            if(0) {}
            else if(key == "front_left")
            {
                addStubsDebugLog("readFromStack(CS_WheelFloatValues): reading field \"front_left\" (float)...");
                try
                {
                    readFromStack(stack, &(value->front_left));
                }
                catch(std::exception &ex)
                {
                    throw sim::exception("field 'front_left': %s", ex.what());
                }
            }
            else if(key == "front_right")
            {
                addStubsDebugLog("readFromStack(CS_WheelFloatValues): reading field \"front_right\" (float)...");
                try
                {
                    readFromStack(stack, &(value->front_right));
                }
                catch(std::exception &ex)
                {
                    throw sim::exception("field 'front_right': %s", ex.what());
                }
            }
            else if(key == "rear_left")
            {
                addStubsDebugLog("readFromStack(CS_WheelFloatValues): reading field \"rear_left\" (float)...");
                try
                {
                    readFromStack(stack, &(value->rear_left));
                }
                catch(std::exception &ex)
                {
                    throw sim::exception("field 'rear_left': %s", ex.what());
                }
            }
            else if(key == "rear_right")
            {
                addStubsDebugLog("readFromStack(CS_WheelFloatValues): reading field \"rear_right\" (float)...");
                try
                {
                    readFromStack(stack, &(value->rear_right));
                }
                catch(std::exception &ex)
                {
                    throw sim::exception("field 'rear_right': %s", ex.what());
                }
            }
            else
            {
                throw sim::exception("unexpected key: %s", key);
            }

            requiredFields.erase(key);
            numItems = (sim::getStackSize(stack) - oldsz + 1) / 2;
        }

        for(const auto &field : requiredFields)
            throw sim::exception("missing required field '%s'", field);
    }
    catch(std::exception &ex)
    {
        throw sim::exception("readFromStack(CS_WheelFloatValues): %s", ex.what());
    }

    addStubsDebugLog("readFromStack(CS_WheelFloatValues): finished reading");
}

void writeToStack(const CS_WheelFloatValues &value, int stack, const WriteOptions &wropt)
{
    addStubsDebugLog("writeToStack(CS_WheelFloatValues): begin writing...");

    try
    {
        sim::pushTableOntoStack(stack);

        addStubsDebugLog("writeToStack(CS_WheelFloatValues): writing field \"front_left\" (float)...");
        try
        {
            writeToStack(std::string{"front_left"}, stack);
            writeToStack(value.front_left, stack);
            sim::insertDataIntoStackTable(stack);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("field 'front_left': %s", ex.what());
        }
        addStubsDebugLog("writeToStack(CS_WheelFloatValues): writing field \"front_right\" (float)...");
        try
        {
            writeToStack(std::string{"front_right"}, stack);
            writeToStack(value.front_right, stack);
            sim::insertDataIntoStackTable(stack);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("field 'front_right': %s", ex.what());
        }
        addStubsDebugLog("writeToStack(CS_WheelFloatValues): writing field \"rear_left\" (float)...");
        try
        {
            writeToStack(std::string{"rear_left"}, stack);
            writeToStack(value.rear_left, stack);
            sim::insertDataIntoStackTable(stack);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("field 'rear_left': %s", ex.what());
        }
        addStubsDebugLog("writeToStack(CS_WheelFloatValues): writing field \"rear_right\" (float)...");
        try
        {
            writeToStack(std::string{"rear_right"}, stack);
            writeToStack(value.rear_right, stack);
            sim::insertDataIntoStackTable(stack);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("field 'rear_right': %s", ex.what());
        }
    }
    catch(std::exception &ex)
    {
        throw sim::exception("writeToStack(CS_WheelFloatValues): %s", ex.what());
    }

    addStubsDebugLog("writeToStack(CS_WheelFloatValues): finished writing");
}

CS_WheelFloatValues::CS_WheelFloatValues()
{
    front_left = 0.0;
    front_right = 0.0;
    rear_left = 0.0;
    rear_right = 0.0;
}

void readFromStack(int stack, CS_Odometry *value, const ReadOptions &rdopt)
{
    addStubsDebugLog("readFromStack(CS_Odometry): begin reading...");
    addStubsDebugStackDump(stack);

    try
    {
        int info = sim::getStackTableInfo(stack, 0);
        if(info != sim_stack_table_map && info != sim_stack_table_empty)
        {
            throw sim::exception("expected a map");
        }

        int oldsz = sim::getStackSize(stack);
        sim::unfoldStackTable(stack);
        int numItems = (sim::getStackSize(stack) - oldsz + 1) / 2;

        std::set<std::string> requiredFields{"pose", "twist"};

        while(numItems >= 1)
        {
            sim::moveStackItemToTop(stack, oldsz - 1); // move key to top
            std::string key;
            readFromStack(stack, &key);

            sim::moveStackItemToTop(stack, oldsz - 1); // move value to top
            if(0) {}
            else if(key == "pose")
            {
                addStubsDebugLog("readFromStack(CS_Odometry): reading field \"pose\" (CS_Pose2D)...");
                try
                {
                    readFromStack(stack, &(value->pose));
                }
                catch(std::exception &ex)
                {
                    throw sim::exception("field 'pose': %s", ex.what());
                }
            }
            else if(key == "twist")
            {
                addStubsDebugLog("readFromStack(CS_Odometry): reading field \"twist\" (CS_Twist2D)...");
                try
                {
                    readFromStack(stack, &(value->twist));
                }
                catch(std::exception &ex)
                {
                    throw sim::exception("field 'twist': %s", ex.what());
                }
            }
            else
            {
                throw sim::exception("unexpected key: %s", key);
            }

            requiredFields.erase(key);
            numItems = (sim::getStackSize(stack) - oldsz + 1) / 2;
        }

        for(const auto &field : requiredFields)
            throw sim::exception("missing required field '%s'", field);
    }
    catch(std::exception &ex)
    {
        throw sim::exception("readFromStack(CS_Odometry): %s", ex.what());
    }

    addStubsDebugLog("readFromStack(CS_Odometry): finished reading");
}

void writeToStack(const CS_Odometry &value, int stack, const WriteOptions &wropt)
{
    addStubsDebugLog("writeToStack(CS_Odometry): begin writing...");

    try
    {
        sim::pushTableOntoStack(stack);

        addStubsDebugLog("writeToStack(CS_Odometry): writing field \"pose\" (CS_Pose2D)...");
        try
        {
            writeToStack(std::string{"pose"}, stack);
            writeToStack(value.pose, stack);
            sim::insertDataIntoStackTable(stack);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("field 'pose': %s", ex.what());
        }
        addStubsDebugLog("writeToStack(CS_Odometry): writing field \"twist\" (CS_Twist2D)...");
        try
        {
            writeToStack(std::string{"twist"}, stack);
            writeToStack(value.twist, stack);
            sim::insertDataIntoStackTable(stack);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("field 'twist': %s", ex.what());
        }
    }
    catch(std::exception &ex)
    {
        throw sim::exception("writeToStack(CS_Odometry): %s", ex.what());
    }

    addStubsDebugLog("writeToStack(CS_Odometry): finished writing");
}

CS_Odometry::CS_Odometry()
{
}

void readFromStack(int stack, CS_Vector3 *value, const ReadOptions &rdopt)
{
    addStubsDebugLog("readFromStack(CS_Vector3): begin reading...");
    addStubsDebugStackDump(stack);

    try
    {
        int info = sim::getStackTableInfo(stack, 0);
        if(info != sim_stack_table_map && info != sim_stack_table_empty)
        {
            throw sim::exception("expected a map");
        }

        int oldsz = sim::getStackSize(stack);
        sim::unfoldStackTable(stack);
        int numItems = (sim::getStackSize(stack) - oldsz + 1) / 2;

        std::set<std::string> requiredFields{"x", "y", "z"};

        while(numItems >= 1)
        {
            sim::moveStackItemToTop(stack, oldsz - 1); // move key to top
            std::string key;
            readFromStack(stack, &key);

            sim::moveStackItemToTop(stack, oldsz - 1); // move value to top
            if(0) {}
            else if(key == "x")
            {
                addStubsDebugLog("readFromStack(CS_Vector3): reading field \"x\" (float)...");
                try
                {
                    readFromStack(stack, &(value->x));
                }
                catch(std::exception &ex)
                {
                    throw sim::exception("field 'x': %s", ex.what());
                }
            }
            else if(key == "y")
            {
                addStubsDebugLog("readFromStack(CS_Vector3): reading field \"y\" (float)...");
                try
                {
                    readFromStack(stack, &(value->y));
                }
                catch(std::exception &ex)
                {
                    throw sim::exception("field 'y': %s", ex.what());
                }
            }
            else if(key == "z")
            {
                addStubsDebugLog("readFromStack(CS_Vector3): reading field \"z\" (float)...");
                try
                {
                    readFromStack(stack, &(value->z));
                }
                catch(std::exception &ex)
                {
                    throw sim::exception("field 'z': %s", ex.what());
                }
            }
            else
            {
                throw sim::exception("unexpected key: %s", key);
            }

            requiredFields.erase(key);
            numItems = (sim::getStackSize(stack) - oldsz + 1) / 2;
        }

        for(const auto &field : requiredFields)
            throw sim::exception("missing required field '%s'", field);
    }
    catch(std::exception &ex)
    {
        throw sim::exception("readFromStack(CS_Vector3): %s", ex.what());
    }

    addStubsDebugLog("readFromStack(CS_Vector3): finished reading");
}

void writeToStack(const CS_Vector3 &value, int stack, const WriteOptions &wropt)
{
    addStubsDebugLog("writeToStack(CS_Vector3): begin writing...");

    try
    {
        sim::pushTableOntoStack(stack);

        addStubsDebugLog("writeToStack(CS_Vector3): writing field \"x\" (float)...");
        try
        {
            writeToStack(std::string{"x"}, stack);
            writeToStack(value.x, stack);
            sim::insertDataIntoStackTable(stack);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("field 'x': %s", ex.what());
        }
        addStubsDebugLog("writeToStack(CS_Vector3): writing field \"y\" (float)...");
        try
        {
            writeToStack(std::string{"y"}, stack);
            writeToStack(value.y, stack);
            sim::insertDataIntoStackTable(stack);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("field 'y': %s", ex.what());
        }
        addStubsDebugLog("writeToStack(CS_Vector3): writing field \"z\" (float)...");
        try
        {
            writeToStack(std::string{"z"}, stack);
            writeToStack(value.z, stack);
            sim::insertDataIntoStackTable(stack);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("field 'z': %s", ex.what());
        }
    }
    catch(std::exception &ex)
    {
        throw sim::exception("writeToStack(CS_Vector3): %s", ex.what());
    }

    addStubsDebugLog("writeToStack(CS_Vector3): finished writing");
}

CS_Vector3::CS_Vector3()
{
}

void readFromStack(int stack, CS_IMU *value, const ReadOptions &rdopt)
{
    addStubsDebugLog("readFromStack(CS_IMU): begin reading...");
    addStubsDebugStackDump(stack);

    try
    {
        int info = sim::getStackTableInfo(stack, 0);
        if(info != sim_stack_table_map && info != sim_stack_table_empty)
        {
            throw sim::exception("expected a map");
        }

        int oldsz = sim::getStackSize(stack);
        sim::unfoldStackTable(stack);
        int numItems = (sim::getStackSize(stack) - oldsz + 1) / 2;

        std::set<std::string> requiredFields{"angular_velocity", "acceleration"};

        while(numItems >= 1)
        {
            sim::moveStackItemToTop(stack, oldsz - 1); // move key to top
            std::string key;
            readFromStack(stack, &key);

            sim::moveStackItemToTop(stack, oldsz - 1); // move value to top
            if(0) {}
            else if(key == "angular_velocity")
            {
                addStubsDebugLog("readFromStack(CS_IMU): reading field \"angular_velocity\" (CS_Vector3)...");
                try
                {
                    readFromStack(stack, &(value->angular_velocity));
                }
                catch(std::exception &ex)
                {
                    throw sim::exception("field 'angular_velocity': %s", ex.what());
                }
            }
            else if(key == "acceleration")
            {
                addStubsDebugLog("readFromStack(CS_IMU): reading field \"acceleration\" (CS_Vector3)...");
                try
                {
                    readFromStack(stack, &(value->acceleration));
                }
                catch(std::exception &ex)
                {
                    throw sim::exception("field 'acceleration': %s", ex.what());
                }
            }
            else
            {
                throw sim::exception("unexpected key: %s", key);
            }

            requiredFields.erase(key);
            numItems = (sim::getStackSize(stack) - oldsz + 1) / 2;
        }

        for(const auto &field : requiredFields)
            throw sim::exception("missing required field '%s'", field);
    }
    catch(std::exception &ex)
    {
        throw sim::exception("readFromStack(CS_IMU): %s", ex.what());
    }

    addStubsDebugLog("readFromStack(CS_IMU): finished reading");
}

void writeToStack(const CS_IMU &value, int stack, const WriteOptions &wropt)
{
    addStubsDebugLog("writeToStack(CS_IMU): begin writing...");

    try
    {
        sim::pushTableOntoStack(stack);

        addStubsDebugLog("writeToStack(CS_IMU): writing field \"angular_velocity\" (CS_Vector3)...");
        try
        {
            writeToStack(std::string{"angular_velocity"}, stack);
            writeToStack(value.angular_velocity, stack);
            sim::insertDataIntoStackTable(stack);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("field 'angular_velocity': %s", ex.what());
        }
        addStubsDebugLog("writeToStack(CS_IMU): writing field \"acceleration\" (CS_Vector3)...");
        try
        {
            writeToStack(std::string{"acceleration"}, stack);
            writeToStack(value.acceleration, stack);
            sim::insertDataIntoStackTable(stack);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("field 'acceleration': %s", ex.what());
        }
    }
    catch(std::exception &ex)
    {
        throw sim::exception("writeToStack(CS_IMU): %s", ex.what());
    }

    addStubsDebugLog("writeToStack(CS_IMU): finished writing");
}

CS_IMU::CS_IMU()
{
}

void readFromStack(int stack, CS_Attitude *value, const ReadOptions &rdopt)
{
    addStubsDebugLog("readFromStack(CS_Attitude): begin reading...");
    addStubsDebugStackDump(stack);

    try
    {
        int info = sim::getStackTableInfo(stack, 0);
        if(info != sim_stack_table_map && info != sim_stack_table_empty)
        {
            throw sim::exception("expected a map");
        }

        int oldsz = sim::getStackSize(stack);
        sim::unfoldStackTable(stack);
        int numItems = (sim::getStackSize(stack) - oldsz + 1) / 2;

        std::set<std::string> requiredFields{"yaw", "pitch", "roll"};

        while(numItems >= 1)
        {
            sim::moveStackItemToTop(stack, oldsz - 1); // move key to top
            std::string key;
            readFromStack(stack, &key);

            sim::moveStackItemToTop(stack, oldsz - 1); // move value to top
            if(0) {}
            else if(key == "yaw")
            {
                addStubsDebugLog("readFromStack(CS_Attitude): reading field \"yaw\" (float)...");
                try
                {
                    readFromStack(stack, &(value->yaw));
                }
                catch(std::exception &ex)
                {
                    throw sim::exception("field 'yaw': %s", ex.what());
                }
            }
            else if(key == "pitch")
            {
                addStubsDebugLog("readFromStack(CS_Attitude): reading field \"pitch\" (float)...");
                try
                {
                    readFromStack(stack, &(value->pitch));
                }
                catch(std::exception &ex)
                {
                    throw sim::exception("field 'pitch': %s", ex.what());
                }
            }
            else if(key == "roll")
            {
                addStubsDebugLog("readFromStack(CS_Attitude): reading field \"roll\" (float)...");
                try
                {
                    readFromStack(stack, &(value->roll));
                }
                catch(std::exception &ex)
                {
                    throw sim::exception("field 'roll': %s", ex.what());
                }
            }
            else
            {
                throw sim::exception("unexpected key: %s", key);
            }

            requiredFields.erase(key);
            numItems = (sim::getStackSize(stack) - oldsz + 1) / 2;
        }

        for(const auto &field : requiredFields)
            throw sim::exception("missing required field '%s'", field);
    }
    catch(std::exception &ex)
    {
        throw sim::exception("readFromStack(CS_Attitude): %s", ex.what());
    }

    addStubsDebugLog("readFromStack(CS_Attitude): finished reading");
}

void writeToStack(const CS_Attitude &value, int stack, const WriteOptions &wropt)
{
    addStubsDebugLog("writeToStack(CS_Attitude): begin writing...");

    try
    {
        sim::pushTableOntoStack(stack);

        addStubsDebugLog("writeToStack(CS_Attitude): writing field \"yaw\" (float)...");
        try
        {
            writeToStack(std::string{"yaw"}, stack);
            writeToStack(value.yaw, stack);
            sim::insertDataIntoStackTable(stack);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("field 'yaw': %s", ex.what());
        }
        addStubsDebugLog("writeToStack(CS_Attitude): writing field \"pitch\" (float)...");
        try
        {
            writeToStack(std::string{"pitch"}, stack);
            writeToStack(value.pitch, stack);
            sim::insertDataIntoStackTable(stack);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("field 'pitch': %s", ex.what());
        }
        addStubsDebugLog("writeToStack(CS_Attitude): writing field \"roll\" (float)...");
        try
        {
            writeToStack(std::string{"roll"}, stack);
            writeToStack(value.roll, stack);
            sim::insertDataIntoStackTable(stack);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("field 'roll': %s", ex.what());
        }
    }
    catch(std::exception &ex)
    {
        throw sim::exception("writeToStack(CS_Attitude): %s", ex.what());
    }

    addStubsDebugLog("writeToStack(CS_Attitude): finished writing");
}

CS_Attitude::CS_Attitude()
{
}

void readFromStack(int stack, CS_BoundingBox *value, const ReadOptions &rdopt)
{
    addStubsDebugLog("readFromStack(CS_BoundingBox): begin reading...");
    addStubsDebugStackDump(stack);

    try
    {
        int info = sim::getStackTableInfo(stack, 0);
        if(info != sim_stack_table_map && info != sim_stack_table_empty)
        {
            throw sim::exception("expected a map");
        }

        int oldsz = sim::getStackSize(stack);
        sim::unfoldStackTable(stack);
        int numItems = (sim::getStackSize(stack) - oldsz + 1) / 2;

        std::set<std::string> requiredFields{"handle", "x", "y", "width", "height"};

        while(numItems >= 1)
        {
            sim::moveStackItemToTop(stack, oldsz - 1); // move key to top
            std::string key;
            readFromStack(stack, &key);

            sim::moveStackItemToTop(stack, oldsz - 1); // move value to top
            if(0) {}
            else if(key == "handle")
            {
                addStubsDebugLog("readFromStack(CS_BoundingBox): reading field \"handle\" (int)...");
                try
                {
                    readFromStack(stack, &(value->handle));
                }
                catch(std::exception &ex)
                {
                    throw sim::exception("field 'handle': %s", ex.what());
                }
            }
            else if(key == "x")
            {
                addStubsDebugLog("readFromStack(CS_BoundingBox): reading field \"x\" (float)...");
                try
                {
                    readFromStack(stack, &(value->x));
                }
                catch(std::exception &ex)
                {
                    throw sim::exception("field 'x': %s", ex.what());
                }
            }
            else if(key == "y")
            {
                addStubsDebugLog("readFromStack(CS_BoundingBox): reading field \"y\" (float)...");
                try
                {
                    readFromStack(stack, &(value->y));
                }
                catch(std::exception &ex)
                {
                    throw sim::exception("field 'y': %s", ex.what());
                }
            }
            else if(key == "width")
            {
                addStubsDebugLog("readFromStack(CS_BoundingBox): reading field \"width\" (float)...");
                try
                {
                    readFromStack(stack, &(value->width));
                }
                catch(std::exception &ex)
                {
                    throw sim::exception("field 'width': %s", ex.what());
                }
            }
            else if(key == "height")
            {
                addStubsDebugLog("readFromStack(CS_BoundingBox): reading field \"height\" (float)...");
                try
                {
                    readFromStack(stack, &(value->height));
                }
                catch(std::exception &ex)
                {
                    throw sim::exception("field 'height': %s", ex.what());
                }
            }
            else
            {
                throw sim::exception("unexpected key: %s", key);
            }

            requiredFields.erase(key);
            numItems = (sim::getStackSize(stack) - oldsz + 1) / 2;
        }

        for(const auto &field : requiredFields)
            throw sim::exception("missing required field '%s'", field);
    }
    catch(std::exception &ex)
    {
        throw sim::exception("readFromStack(CS_BoundingBox): %s", ex.what());
    }

    addStubsDebugLog("readFromStack(CS_BoundingBox): finished reading");
}

void writeToStack(const CS_BoundingBox &value, int stack, const WriteOptions &wropt)
{
    addStubsDebugLog("writeToStack(CS_BoundingBox): begin writing...");

    try
    {
        sim::pushTableOntoStack(stack);

        addStubsDebugLog("writeToStack(CS_BoundingBox): writing field \"handle\" (int)...");
        try
        {
            writeToStack(std::string{"handle"}, stack);
            writeToStack(value.handle, stack);
            sim::insertDataIntoStackTable(stack);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("field 'handle': %s", ex.what());
        }
        addStubsDebugLog("writeToStack(CS_BoundingBox): writing field \"x\" (float)...");
        try
        {
            writeToStack(std::string{"x"}, stack);
            writeToStack(value.x, stack);
            sim::insertDataIntoStackTable(stack);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("field 'x': %s", ex.what());
        }
        addStubsDebugLog("writeToStack(CS_BoundingBox): writing field \"y\" (float)...");
        try
        {
            writeToStack(std::string{"y"}, stack);
            writeToStack(value.y, stack);
            sim::insertDataIntoStackTable(stack);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("field 'y': %s", ex.what());
        }
        addStubsDebugLog("writeToStack(CS_BoundingBox): writing field \"width\" (float)...");
        try
        {
            writeToStack(std::string{"width"}, stack);
            writeToStack(value.width, stack);
            sim::insertDataIntoStackTable(stack);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("field 'width': %s", ex.what());
        }
        addStubsDebugLog("writeToStack(CS_BoundingBox): writing field \"height\" (float)...");
        try
        {
            writeToStack(std::string{"height"}, stack);
            writeToStack(value.height, stack);
            sim::insertDataIntoStackTable(stack);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("field 'height': %s", ex.what());
        }
    }
    catch(std::exception &ex)
    {
        throw sim::exception("writeToStack(CS_BoundingBox): %s", ex.what());
    }

    addStubsDebugLog("writeToStack(CS_BoundingBox): finished writing");
}

CS_BoundingBox::CS_BoundingBox()
{
}

void checkRuntimeVersion()
{
    int simVer = sim::programVersion();

    // version required by simStubsGen:
    int minVer = 4050107; // 4.5.1rev7
    if(simVer < minVer)
        throw sim::exception("requires at least %s (simStubsGen)", sim::versionString(minVer));

    // version required by plugin:
    if(simVer < SIM_REQUIRED_PROGRAM_VERSION_NB)
        throw sim::exception("requires at least %s", sim::versionString(SIM_REQUIRED_PROGRAM_VERSION_NB));

    // warn if the app older than the headers used to compile:
    if(simVer < SIM_PROGRAM_FULL_VERSION_NB)
        sim::addLog(sim_verbosity_warnings, "has been built for %s", sim::versionString(SIM_PROGRAM_FULL_VERSION_NB));
}

bool registerScriptStuff()
{
    try
    {
        checkRuntimeVersion();

        auto dbg = sim::getNamedBoolParam("simStubsGen.debug");
        if(dbg && *dbg)
            sim::enableStackDebug();

        try
        {
            // register varables from enums:
#if SIM_PROGRAM_FULL_VERSION_NB < 4060010
            sim::registerScriptVariableRaw("VISION", "{}", 0);
#endif
            sim::registerScriptVariable("VISION.PERSON", simrobomaster_PERSON, 0);
            sim::registerScriptVariable("VISION.ROBOT", simrobomaster_ROBOT, 0);
            // register commands:
            sim::registerScriptCallbackFunction("create", create_callback);
            sim::registerScriptCallbackFunction("create_ep", create_ep_callback);
            sim::registerScriptCallbackFunction("create_s1", create_s1_callback);
            sim::registerScriptCallbackFunction("set_target_twist", set_target_twist_callback);
            sim::registerScriptCallbackFunction("get_twist", get_twist_callback);
            sim::registerScriptCallbackFunction("get_wheel_speeds", get_wheel_speeds_callback);
            sim::registerScriptCallbackFunction("set_target_wheel_speeds", set_target_wheel_speeds_callback);
            sim::registerScriptCallbackFunction("get_odometry", get_odometry_callback);
            sim::registerScriptCallbackFunction("get_imu", get_imu_callback);
            sim::registerScriptCallbackFunction("get_attitude", get_attitude_callback);
            sim::registerScriptCallbackFunction("move_to", move_to_callback);
            sim::registerScriptCallbackFunction("get_action_state", get_action_state_callback);
            sim::registerScriptCallbackFunction("set_led_effect", set_led_effect_callback);
            sim::registerScriptCallbackFunction("set_gripper_target", set_gripper_target_callback);
            sim::registerScriptCallbackFunction("get_gripper", get_gripper_callback);
            sim::registerScriptCallbackFunction("get_arm_position", get_arm_position_callback);
            sim::registerScriptCallbackFunction("move_arm", move_arm_callback);
            sim::registerScriptCallbackFunction("enable_camera", enable_camera_callback);
            sim::registerScriptCallbackFunction("move_gimbal", move_gimbal_callback);
            sim::registerScriptCallbackFunction("get_gimbal_angles", get_gimbal_angles_callback);
            sim::registerScriptCallbackFunction("set_gimbal_target_speeds", set_gimbal_target_speeds_callback);
            sim::registerScriptCallbackFunction("get_servo_angle", get_servo_angle_callback);
            sim::registerScriptCallbackFunction("enable_gimbal", enable_gimbal_callback);
            sim::registerScriptCallbackFunction("set_blaster_led", set_blaster_led_callback);
            sim::registerScriptCallbackFunction("move_servo", move_servo_callback);
            sim::registerScriptCallbackFunction("set_servo_target_speed", set_servo_target_speed_callback);
            sim::registerScriptCallbackFunction("set_servo_mode", set_servo_mode_callback);
            sim::registerScriptCallbackFunction("enable_servo", enable_servo_callback);
            sim::registerScriptCallbackFunction("set_mode", set_mode_callback);
            sim::registerScriptCallbackFunction("enable_distance_sensor", enable_distance_sensor_callback);
            sim::registerScriptCallbackFunction("disable_distance_sensor", disable_distance_sensor_callback);
            sim::registerScriptCallbackFunction("get_distance_reading", get_distance_reading_callback);
            sim::registerScriptCallbackFunction("set_log_level", set_log_level_callback);
            sim::registerScriptCallbackFunction("get_handles", get_handles_callback);
            sim::registerScriptCallbackFunction("set_vision_class", set_vision_class_callback);
            sim::registerScriptCallbackFunction("configure_vision", configure_vision_callback);
            sim::registerScriptCallbackFunction("enable_vision", enable_vision_callback);
            sim::registerScriptCallbackFunction("get_detected_robots", get_detected_robots_callback);
            sim::registerScriptCallbackFunction("get_detected_people", get_detected_people_callback);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("Initialization failed (registerScriptItems): %s", ex.what());
        }
    }
    catch(sim::exception& ex)
    {
        sim::addLog(sim_verbosity_errors, ex.what());
        return false;
    }
    return true;
}

const char* vision_string(VISION x)
{
    switch(x)
    {
        case simrobomaster_PERSON: return "simrobomaster_PERSON";
        case simrobomaster_ROBOT: return "simrobomaster_ROBOT";
        default: return "???";
    }
}

create_in::create_in()
{
    remote_api_network = "";
    serial_number = "";
    camera_use_udp = false;
    camera_bitrate = 1000000;
    enable_camera = true;
    enable_gripper = true;
    enable_arm = true;
    enable_gimbal = true;
    enable_vision = true;
}

create_out::create_out()
{
}

void create_callback(SScriptCallBack *p)
{
    addStubsDebugLog("create_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.create";

    create_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    create_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 1)
            throw sim::exception("not enough arguments");
        if(numArgs > 10)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("create_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }

        if(numArgs >= 2)
        {
            addStubsDebugLog("create_callback: reading input argument 2 \"remote_api_network\" (std::string)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.remote_api_network));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 2 (remote_api_network): %s", ex.what());
            }
        }

        if(numArgs >= 3)
        {
            addStubsDebugLog("create_callback: reading input argument 3 \"serial_number\" (std::string)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.serial_number));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 3 (serial_number): %s", ex.what());
            }
        }

        if(numArgs >= 4)
        {
            addStubsDebugLog("create_callback: reading input argument 4 \"camera_use_udp\" (bool)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.camera_use_udp));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 4 (camera_use_udp): %s", ex.what());
            }
        }

        if(numArgs >= 5)
        {
            addStubsDebugLog("create_callback: reading input argument 5 \"camera_bitrate\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.camera_bitrate));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 5 (camera_bitrate): %s", ex.what());
            }
        }

        if(numArgs >= 6)
        {
            addStubsDebugLog("create_callback: reading input argument 6 \"enable_camera\" (bool)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.enable_camera));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 6 (enable_camera): %s", ex.what());
            }
        }

        if(numArgs >= 7)
        {
            addStubsDebugLog("create_callback: reading input argument 7 \"enable_gripper\" (bool)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.enable_gripper));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 7 (enable_gripper): %s", ex.what());
            }
        }

        if(numArgs >= 8)
        {
            addStubsDebugLog("create_callback: reading input argument 8 \"enable_arm\" (bool)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.enable_arm));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 8 (enable_arm): %s", ex.what());
            }
        }

        if(numArgs >= 9)
        {
            addStubsDebugLog("create_callback: reading input argument 9 \"enable_gimbal\" (bool)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.enable_gimbal));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 9 (enable_gimbal): %s", ex.what());
            }
        }

        if(numArgs >= 10)
        {
            addStubsDebugLog("create_callback: reading input argument 10 \"enable_vision\" (bool)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.enable_vision));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 10 (enable_vision): %s", ex.what());
            }
        }


        addStubsDebugLog("create_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("create_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("create_callback: calling callback (create)");
        simRobomaster_create(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("create_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("create_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack

        addStubsDebugLog("create_callback: writing output argument 1 \"handle\" (int)...");
        try
        {
            writeToStack(out_args.handle, p->stackID);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("write out arg 1 (handle): %s", ex.what());
        }

        addStubsDebugLog("create_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("create_callback: finished");
}

create_ep_in::create_ep_in()
{
    remote_api_network = "";
    serial_number = "";
}

create_ep_out::create_ep_out()
{
}

void create_ep_callback(SScriptCallBack *p)
{
    addStubsDebugLog("create_ep_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.create_ep";

    create_ep_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    create_ep_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 1)
            throw sim::exception("not enough arguments");
        if(numArgs > 3)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("create_ep_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }

        if(numArgs >= 2)
        {
            addStubsDebugLog("create_ep_callback: reading input argument 2 \"remote_api_network\" (std::string)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.remote_api_network));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 2 (remote_api_network): %s", ex.what());
            }
        }

        if(numArgs >= 3)
        {
            addStubsDebugLog("create_ep_callback: reading input argument 3 \"serial_number\" (std::string)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.serial_number));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 3 (serial_number): %s", ex.what());
            }
        }


        addStubsDebugLog("create_ep_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("create_ep_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("create_ep_callback: calling callback (create_ep)");
        simRobomaster_create_ep(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("create_ep_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("create_ep_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack

        addStubsDebugLog("create_ep_callback: writing output argument 1 \"handle\" (int)...");
        try
        {
            writeToStack(out_args.handle, p->stackID);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("write out arg 1 (handle): %s", ex.what());
        }

        addStubsDebugLog("create_ep_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("create_ep_callback: finished");
}

create_s1_in::create_s1_in()
{
    remote_api_network = "";
    serial_number = "";
}

create_s1_out::create_s1_out()
{
}

void create_s1_callback(SScriptCallBack *p)
{
    addStubsDebugLog("create_s1_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.create_s1";

    create_s1_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    create_s1_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 1)
            throw sim::exception("not enough arguments");
        if(numArgs > 3)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("create_s1_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }

        if(numArgs >= 2)
        {
            addStubsDebugLog("create_s1_callback: reading input argument 2 \"remote_api_network\" (std::string)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.remote_api_network));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 2 (remote_api_network): %s", ex.what());
            }
        }

        if(numArgs >= 3)
        {
            addStubsDebugLog("create_s1_callback: reading input argument 3 \"serial_number\" (std::string)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.serial_number));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 3 (serial_number): %s", ex.what());
            }
        }


        addStubsDebugLog("create_s1_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("create_s1_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("create_s1_callback: calling callback (create_s1)");
        simRobomaster_create_s1(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("create_s1_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("create_s1_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack

        addStubsDebugLog("create_s1_callback: writing output argument 1 \"handle\" (int)...");
        try
        {
            writeToStack(out_args.handle, p->stackID);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("write out arg 1 (handle): %s", ex.what());
        }

        addStubsDebugLog("create_s1_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("create_s1_callback: finished");
}

set_target_twist_in::set_target_twist_in()
{
}

set_target_twist_out::set_target_twist_out()
{
}

void set_target_twist_callback(SScriptCallBack *p)
{
    addStubsDebugLog("set_target_twist_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.set_target_twist";

    set_target_twist_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    set_target_twist_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 2)
            throw sim::exception("not enough arguments");
        if(numArgs > 2)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("set_target_twist_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }

        if(numArgs >= 2)
        {
            addStubsDebugLog("set_target_twist_callback: reading input argument 2 \"twist\" (CS_Twist2D)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.twist));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 2 (twist): %s", ex.what());
            }
        }


        addStubsDebugLog("set_target_twist_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("set_target_twist_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("set_target_twist_callback: calling callback (set_target_twist)");
        simRobomaster_set_target_twist(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("set_target_twist_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("set_target_twist_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack


        addStubsDebugLog("set_target_twist_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("set_target_twist_callback: finished");
}

get_twist_in::get_twist_in()
{
}

get_twist_out::get_twist_out()
{
}

void get_twist_callback(SScriptCallBack *p)
{
    addStubsDebugLog("get_twist_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.get_twist";

    get_twist_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    get_twist_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 1)
            throw sim::exception("not enough arguments");
        if(numArgs > 1)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("get_twist_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }


        addStubsDebugLog("get_twist_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("get_twist_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("get_twist_callback: calling callback (get_twist)");
        simRobomaster_get_twist(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("get_twist_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("get_twist_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack

        addStubsDebugLog("get_twist_callback: writing output argument 1 \"twist\" (CS_Twist2D)...");
        try
        {
            writeToStack(out_args.twist, p->stackID);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("write out arg 1 (twist): %s", ex.what());
        }

        addStubsDebugLog("get_twist_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("get_twist_callback: finished");
}

get_wheel_speeds_in::get_wheel_speeds_in()
{
}

get_wheel_speeds_out::get_wheel_speeds_out()
{
}

void get_wheel_speeds_callback(SScriptCallBack *p)
{
    addStubsDebugLog("get_wheel_speeds_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.get_wheel_speeds";

    get_wheel_speeds_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    get_wheel_speeds_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 1)
            throw sim::exception("not enough arguments");
        if(numArgs > 1)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("get_wheel_speeds_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }


        addStubsDebugLog("get_wheel_speeds_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("get_wheel_speeds_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("get_wheel_speeds_callback: calling callback (get_wheel_speeds)");
        simRobomaster_get_wheel_speeds(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("get_wheel_speeds_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("get_wheel_speeds_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack

        addStubsDebugLog("get_wheel_speeds_callback: writing output argument 1 \"speeds\" (CS_WheelFloatValues)...");
        try
        {
            writeToStack(out_args.speeds, p->stackID);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("write out arg 1 (speeds): %s", ex.what());
        }

        addStubsDebugLog("get_wheel_speeds_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("get_wheel_speeds_callback: finished");
}

set_target_wheel_speeds_in::set_target_wheel_speeds_in()
{
}

set_target_wheel_speeds_out::set_target_wheel_speeds_out()
{
}

void set_target_wheel_speeds_callback(SScriptCallBack *p)
{
    addStubsDebugLog("set_target_wheel_speeds_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.set_target_wheel_speeds";

    set_target_wheel_speeds_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    set_target_wheel_speeds_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 2)
            throw sim::exception("not enough arguments");
        if(numArgs > 2)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("set_target_wheel_speeds_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }

        if(numArgs >= 2)
        {
            addStubsDebugLog("set_target_wheel_speeds_callback: reading input argument 2 \"speeds\" (CS_WheelFloatValues)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.speeds));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 2 (speeds): %s", ex.what());
            }
        }


        addStubsDebugLog("set_target_wheel_speeds_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("set_target_wheel_speeds_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("set_target_wheel_speeds_callback: calling callback (set_target_wheel_speeds)");
        simRobomaster_set_target_wheel_speeds(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("set_target_wheel_speeds_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("set_target_wheel_speeds_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack


        addStubsDebugLog("set_target_wheel_speeds_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("set_target_wheel_speeds_callback: finished");
}

get_odometry_in::get_odometry_in()
{
}

get_odometry_out::get_odometry_out()
{
}

void get_odometry_callback(SScriptCallBack *p)
{
    addStubsDebugLog("get_odometry_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.get_odometry";

    get_odometry_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    get_odometry_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 1)
            throw sim::exception("not enough arguments");
        if(numArgs > 1)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("get_odometry_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }


        addStubsDebugLog("get_odometry_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("get_odometry_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("get_odometry_callback: calling callback (get_odometry)");
        simRobomaster_get_odometry(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("get_odometry_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("get_odometry_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack

        addStubsDebugLog("get_odometry_callback: writing output argument 1 \"odometry\" (CS_Odometry)...");
        try
        {
            writeToStack(out_args.odometry, p->stackID);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("write out arg 1 (odometry): %s", ex.what());
        }

        addStubsDebugLog("get_odometry_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("get_odometry_callback: finished");
}

get_imu_in::get_imu_in()
{
}

get_imu_out::get_imu_out()
{
}

void get_imu_callback(SScriptCallBack *p)
{
    addStubsDebugLog("get_imu_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.get_imu";

    get_imu_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    get_imu_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 1)
            throw sim::exception("not enough arguments");
        if(numArgs > 1)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("get_imu_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }


        addStubsDebugLog("get_imu_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("get_imu_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("get_imu_callback: calling callback (get_imu)");
        simRobomaster_get_imu(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("get_imu_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("get_imu_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack

        addStubsDebugLog("get_imu_callback: writing output argument 1 \"imu\" (CS_IMU)...");
        try
        {
            writeToStack(out_args.imu, p->stackID);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("write out arg 1 (imu): %s", ex.what());
        }

        addStubsDebugLog("get_imu_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("get_imu_callback: finished");
}

get_attitude_in::get_attitude_in()
{
}

get_attitude_out::get_attitude_out()
{
}

void get_attitude_callback(SScriptCallBack *p)
{
    addStubsDebugLog("get_attitude_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.get_attitude";

    get_attitude_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    get_attitude_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 1)
            throw sim::exception("not enough arguments");
        if(numArgs > 1)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("get_attitude_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }


        addStubsDebugLog("get_attitude_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("get_attitude_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("get_attitude_callback: calling callback (get_attitude)");
        simRobomaster_get_attitude(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("get_attitude_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("get_attitude_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack

        addStubsDebugLog("get_attitude_callback: writing output argument 1 \"attitude\" (CS_Attitude)...");
        try
        {
            writeToStack(out_args.attitude, p->stackID);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("write out arg 1 (attitude): %s", ex.what());
        }

        addStubsDebugLog("get_attitude_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("get_attitude_callback: finished");
}

move_to_in::move_to_in()
{
    linear_speed = 0.5;
    angular_speed = 1.0;
}

move_to_out::move_to_out()
{
}

void move_to_callback(SScriptCallBack *p)
{
    addStubsDebugLog("move_to_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.move_to";

    move_to_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    move_to_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 2)
            throw sim::exception("not enough arguments");
        if(numArgs > 4)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("move_to_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }

        if(numArgs >= 2)
        {
            addStubsDebugLog("move_to_callback: reading input argument 2 \"pose\" (CS_Pose2D)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.pose));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 2 (pose): %s", ex.what());
            }
        }

        if(numArgs >= 3)
        {
            addStubsDebugLog("move_to_callback: reading input argument 3 \"linear_speed\" (float)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.linear_speed));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 3 (linear_speed): %s", ex.what());
            }
        }

        if(numArgs >= 4)
        {
            addStubsDebugLog("move_to_callback: reading input argument 4 \"angular_speed\" (float)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.angular_speed));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 4 (angular_speed): %s", ex.what());
            }
        }


        addStubsDebugLog("move_to_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("move_to_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("move_to_callback: calling callback (move_to)");
        simRobomaster_move_to(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("move_to_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("move_to_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack

        addStubsDebugLog("move_to_callback: writing output argument 1 \"handle\" (int)...");
        try
        {
            writeToStack(out_args.handle, p->stackID);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("write out arg 1 (handle): %s", ex.what());
        }

        addStubsDebugLog("move_to_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("move_to_callback: finished");
}

get_action_state_in::get_action_state_in()
{
}

get_action_state_out::get_action_state_out()
{
}

void get_action_state_callback(SScriptCallBack *p)
{
    addStubsDebugLog("get_action_state_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.get_action_state";

    get_action_state_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    get_action_state_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 2)
            throw sim::exception("not enough arguments");
        if(numArgs > 2)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("get_action_state_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }

        if(numArgs >= 2)
        {
            addStubsDebugLog("get_action_state_callback: reading input argument 2 \"action\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.action));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 2 (action): %s", ex.what());
            }
        }


        addStubsDebugLog("get_action_state_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("get_action_state_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("get_action_state_callback: calling callback (get_action_state)");
        simRobomaster_get_action_state(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("get_action_state_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("get_action_state_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack

        addStubsDebugLog("get_action_state_callback: writing output argument 1 \"status\" (std::string)...");
        try
        {
            writeToStack(out_args.status, p->stackID);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("write out arg 1 (status): %s", ex.what());
        }

        addStubsDebugLog("get_action_state_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("get_action_state_callback: finished");
}

set_led_effect_in::set_led_effect_in()
{
    effect = "on";
    mask = 0xFF;
    led_mask = 0xFF;
    period_on = 0.5;
    period_off = 0.5;
    loop = true;
}

set_led_effect_out::set_led_effect_out()
{
}

void set_led_effect_callback(SScriptCallBack *p)
{
    addStubsDebugLog("set_led_effect_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.set_led_effect";

    set_led_effect_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    set_led_effect_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 4)
            throw sim::exception("not enough arguments");
        if(numArgs > 10)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("set_led_effect_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }

        if(numArgs >= 2)
        {
            addStubsDebugLog("set_led_effect_callback: reading input argument 2 \"r\" (float)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.r));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 2 (r): %s", ex.what());
            }
        }

        if(numArgs >= 3)
        {
            addStubsDebugLog("set_led_effect_callback: reading input argument 3 \"g\" (float)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.g));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 3 (g): %s", ex.what());
            }
        }

        if(numArgs >= 4)
        {
            addStubsDebugLog("set_led_effect_callback: reading input argument 4 \"b\" (float)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.b));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 4 (b): %s", ex.what());
            }
        }

        if(numArgs >= 5)
        {
            addStubsDebugLog("set_led_effect_callback: reading input argument 5 \"effect\" (std::string)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.effect));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 5 (effect): %s", ex.what());
            }
        }

        if(numArgs >= 6)
        {
            addStubsDebugLog("set_led_effect_callback: reading input argument 6 \"mask\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.mask));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 6 (mask): %s", ex.what());
            }
        }

        if(numArgs >= 7)
        {
            addStubsDebugLog("set_led_effect_callback: reading input argument 7 \"led_mask\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.led_mask));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 7 (led_mask): %s", ex.what());
            }
        }

        if(numArgs >= 8)
        {
            addStubsDebugLog("set_led_effect_callback: reading input argument 8 \"period_on\" (float)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.period_on));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 8 (period_on): %s", ex.what());
            }
        }

        if(numArgs >= 9)
        {
            addStubsDebugLog("set_led_effect_callback: reading input argument 9 \"period_off\" (float)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.period_off));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 9 (period_off): %s", ex.what());
            }
        }

        if(numArgs >= 10)
        {
            addStubsDebugLog("set_led_effect_callback: reading input argument 10 \"loop\" (bool)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.loop));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 10 (loop): %s", ex.what());
            }
        }


        addStubsDebugLog("set_led_effect_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("set_led_effect_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("set_led_effect_callback: calling callback (set_led_effect)");
        simRobomaster_set_led_effect(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("set_led_effect_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("set_led_effect_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack


        addStubsDebugLog("set_led_effect_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("set_led_effect_callback: finished");
}

set_gripper_target_in::set_gripper_target_in()
{
    power = 0.5;
}

set_gripper_target_out::set_gripper_target_out()
{
}

void set_gripper_target_callback(SScriptCallBack *p)
{
    addStubsDebugLog("set_gripper_target_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.set_gripper_target";

    set_gripper_target_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    set_gripper_target_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 2)
            throw sim::exception("not enough arguments");
        if(numArgs > 3)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("set_gripper_target_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }

        if(numArgs >= 2)
        {
            addStubsDebugLog("set_gripper_target_callback: reading input argument 2 \"state\" (std::string)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.state));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 2 (state): %s", ex.what());
            }
        }

        if(numArgs >= 3)
        {
            addStubsDebugLog("set_gripper_target_callback: reading input argument 3 \"power\" (float)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.power));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 3 (power): %s", ex.what());
            }
        }


        addStubsDebugLog("set_gripper_target_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("set_gripper_target_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("set_gripper_target_callback: calling callback (set_gripper_target)");
        simRobomaster_set_gripper_target(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("set_gripper_target_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("set_gripper_target_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack


        addStubsDebugLog("set_gripper_target_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("set_gripper_target_callback: finished");
}

get_gripper_in::get_gripper_in()
{
}

get_gripper_out::get_gripper_out()
{
}

void get_gripper_callback(SScriptCallBack *p)
{
    addStubsDebugLog("get_gripper_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.get_gripper";

    get_gripper_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    get_gripper_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 1)
            throw sim::exception("not enough arguments");
        if(numArgs > 1)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("get_gripper_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }


        addStubsDebugLog("get_gripper_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("get_gripper_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("get_gripper_callback: calling callback (get_gripper)");
        simRobomaster_get_gripper(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("get_gripper_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("get_gripper_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack

        addStubsDebugLog("get_gripper_callback: writing output argument 1 \"state\" (std::string)...");
        try
        {
            writeToStack(out_args.state, p->stackID);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("write out arg 1 (state): %s", ex.what());
        }

        addStubsDebugLog("get_gripper_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("get_gripper_callback: finished");
}

get_arm_position_in::get_arm_position_in()
{
}

get_arm_position_out::get_arm_position_out()
{
}

void get_arm_position_callback(SScriptCallBack *p)
{
    addStubsDebugLog("get_arm_position_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.get_arm_position";

    get_arm_position_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    get_arm_position_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 1)
            throw sim::exception("not enough arguments");
        if(numArgs > 1)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("get_arm_position_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }


        addStubsDebugLog("get_arm_position_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("get_arm_position_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("get_arm_position_callback: calling callback (get_arm_position)");
        simRobomaster_get_arm_position(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("get_arm_position_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("get_arm_position_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack

        addStubsDebugLog("get_arm_position_callback: writing output argument 1 \"position\" (CS_Vector3)...");
        try
        {
            writeToStack(out_args.position, p->stackID);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("write out arg 1 (position): %s", ex.what());
        }

        addStubsDebugLog("get_arm_position_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("get_arm_position_callback: finished");
}

move_arm_in::move_arm_in()
{
}

move_arm_out::move_arm_out()
{
}

void move_arm_callback(SScriptCallBack *p)
{
    addStubsDebugLog("move_arm_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.move_arm";

    move_arm_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    move_arm_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 4)
            throw sim::exception("not enough arguments");
        if(numArgs > 4)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("move_arm_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }

        if(numArgs >= 2)
        {
            addStubsDebugLog("move_arm_callback: reading input argument 2 \"x\" (float)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.x));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 2 (x): %s", ex.what());
            }
        }

        if(numArgs >= 3)
        {
            addStubsDebugLog("move_arm_callback: reading input argument 3 \"z\" (float)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.z));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 3 (z): %s", ex.what());
            }
        }

        if(numArgs >= 4)
        {
            addStubsDebugLog("move_arm_callback: reading input argument 4 \"absolute\" (bool)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.absolute));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 4 (absolute): %s", ex.what());
            }
        }


        addStubsDebugLog("move_arm_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("move_arm_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("move_arm_callback: calling callback (move_arm)");
        simRobomaster_move_arm(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("move_arm_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("move_arm_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack

        addStubsDebugLog("move_arm_callback: writing output argument 1 \"handle\" (int)...");
        try
        {
            writeToStack(out_args.handle, p->stackID);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("write out arg 1 (handle): %s", ex.what());
        }

        addStubsDebugLog("move_arm_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("move_arm_callback: finished");
}

enable_camera_in::enable_camera_in()
{
    resolution = "720p";
}

enable_camera_out::enable_camera_out()
{
}

void enable_camera_callback(SScriptCallBack *p)
{
    addStubsDebugLog("enable_camera_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.enable_camera";

    enable_camera_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    enable_camera_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 2)
            throw sim::exception("not enough arguments");
        if(numArgs > 3)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("enable_camera_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }

        if(numArgs >= 2)
        {
            addStubsDebugLog("enable_camera_callback: reading input argument 2 \"enabled\" (bool)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.enabled));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 2 (enabled): %s", ex.what());
            }
        }

        if(numArgs >= 3)
        {
            addStubsDebugLog("enable_camera_callback: reading input argument 3 \"resolution\" (std::string)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.resolution));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 3 (resolution): %s", ex.what());
            }
        }


        addStubsDebugLog("enable_camera_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("enable_camera_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("enable_camera_callback: calling callback (enable_camera)");
        simRobomaster_enable_camera(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("enable_camera_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("enable_camera_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack


        addStubsDebugLog("enable_camera_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("enable_camera_callback: finished");
}

move_gimbal_in::move_gimbal_in()
{
    yaw_frame = "chassis";
    pitch_frame = "fixed";
}

move_gimbal_out::move_gimbal_out()
{
}

void move_gimbal_callback(SScriptCallBack *p)
{
    addStubsDebugLog("move_gimbal_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.move_gimbal";

    move_gimbal_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    move_gimbal_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 5)
            throw sim::exception("not enough arguments");
        if(numArgs > 7)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("move_gimbal_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }

        if(numArgs >= 2)
        {
            addStubsDebugLog("move_gimbal_callback: reading input argument 2 \"yaw\" (float)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.yaw));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 2 (yaw): %s", ex.what());
            }
        }

        if(numArgs >= 3)
        {
            addStubsDebugLog("move_gimbal_callback: reading input argument 3 \"pitch\" (float)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.pitch));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 3 (pitch): %s", ex.what());
            }
        }

        if(numArgs >= 4)
        {
            addStubsDebugLog("move_gimbal_callback: reading input argument 4 \"yaw_speed\" (float)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.yaw_speed));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 4 (yaw_speed): %s", ex.what());
            }
        }

        if(numArgs >= 5)
        {
            addStubsDebugLog("move_gimbal_callback: reading input argument 5 \"pitch_speed\" (float)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.pitch_speed));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 5 (pitch_speed): %s", ex.what());
            }
        }

        if(numArgs >= 6)
        {
            addStubsDebugLog("move_gimbal_callback: reading input argument 6 \"yaw_frame\" (std::string)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.yaw_frame));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 6 (yaw_frame): %s", ex.what());
            }
        }

        if(numArgs >= 7)
        {
            addStubsDebugLog("move_gimbal_callback: reading input argument 7 \"pitch_frame\" (std::string)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.pitch_frame));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 7 (pitch_frame): %s", ex.what());
            }
        }


        addStubsDebugLog("move_gimbal_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("move_gimbal_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("move_gimbal_callback: calling callback (move_gimbal)");
        simRobomaster_move_gimbal(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("move_gimbal_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("move_gimbal_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack

        addStubsDebugLog("move_gimbal_callback: writing output argument 1 \"handle\" (int)...");
        try
        {
            writeToStack(out_args.handle, p->stackID);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("write out arg 1 (handle): %s", ex.what());
        }

        addStubsDebugLog("move_gimbal_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("move_gimbal_callback: finished");
}

get_gimbal_angles_in::get_gimbal_angles_in()
{
    yaw_frame = "chassis";
    pitch_frame = "fixed";
}

get_gimbal_angles_out::get_gimbal_angles_out()
{
}

void get_gimbal_angles_callback(SScriptCallBack *p)
{
    addStubsDebugLog("get_gimbal_angles_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.get_gimbal_angles";

    get_gimbal_angles_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    get_gimbal_angles_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 1)
            throw sim::exception("not enough arguments");
        if(numArgs > 3)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("get_gimbal_angles_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }

        if(numArgs >= 2)
        {
            addStubsDebugLog("get_gimbal_angles_callback: reading input argument 2 \"yaw_frame\" (std::string)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.yaw_frame));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 2 (yaw_frame): %s", ex.what());
            }
        }

        if(numArgs >= 3)
        {
            addStubsDebugLog("get_gimbal_angles_callback: reading input argument 3 \"pitch_frame\" (std::string)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.pitch_frame));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 3 (pitch_frame): %s", ex.what());
            }
        }


        addStubsDebugLog("get_gimbal_angles_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("get_gimbal_angles_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("get_gimbal_angles_callback: calling callback (get_gimbal_angles)");
        simRobomaster_get_gimbal_angles(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("get_gimbal_angles_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("get_gimbal_angles_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack

        addStubsDebugLog("get_gimbal_angles_callback: writing output argument 1 \"yaw\" (float)...");
        try
        {
            writeToStack(out_args.yaw, p->stackID);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("write out arg 1 (yaw): %s", ex.what());
        }
        addStubsDebugLog("get_gimbal_angles_callback: writing output argument 2 \"pitch\" (float)...");
        try
        {
            writeToStack(out_args.pitch, p->stackID);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("write out arg 2 (pitch): %s", ex.what());
        }

        addStubsDebugLog("get_gimbal_angles_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("get_gimbal_angles_callback: finished");
}

set_gimbal_target_speeds_in::set_gimbal_target_speeds_in()
{
}

set_gimbal_target_speeds_out::set_gimbal_target_speeds_out()
{
}

void set_gimbal_target_speeds_callback(SScriptCallBack *p)
{
    addStubsDebugLog("set_gimbal_target_speeds_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.set_gimbal_target_speeds";

    set_gimbal_target_speeds_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    set_gimbal_target_speeds_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 3)
            throw sim::exception("not enough arguments");
        if(numArgs > 3)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("set_gimbal_target_speeds_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }

        if(numArgs >= 2)
        {
            addStubsDebugLog("set_gimbal_target_speeds_callback: reading input argument 2 \"yaw\" (float)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.yaw));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 2 (yaw): %s", ex.what());
            }
        }

        if(numArgs >= 3)
        {
            addStubsDebugLog("set_gimbal_target_speeds_callback: reading input argument 3 \"pitch\" (float)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.pitch));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 3 (pitch): %s", ex.what());
            }
        }


        addStubsDebugLog("set_gimbal_target_speeds_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("set_gimbal_target_speeds_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("set_gimbal_target_speeds_callback: calling callback (set_gimbal_target_speeds)");
        simRobomaster_set_gimbal_target_speeds(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("set_gimbal_target_speeds_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("set_gimbal_target_speeds_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack


        addStubsDebugLog("set_gimbal_target_speeds_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("set_gimbal_target_speeds_callback: finished");
}

get_servo_angle_in::get_servo_angle_in()
{
}

get_servo_angle_out::get_servo_angle_out()
{
}

void get_servo_angle_callback(SScriptCallBack *p)
{
    addStubsDebugLog("get_servo_angle_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.get_servo_angle";

    get_servo_angle_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    get_servo_angle_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 2)
            throw sim::exception("not enough arguments");
        if(numArgs > 2)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("get_servo_angle_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }

        if(numArgs >= 2)
        {
            addStubsDebugLog("get_servo_angle_callback: reading input argument 2 \"servo\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.servo));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 2 (servo): %s", ex.what());
            }
        }


        addStubsDebugLog("get_servo_angle_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("get_servo_angle_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("get_servo_angle_callback: calling callback (get_servo_angle)");
        simRobomaster_get_servo_angle(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("get_servo_angle_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("get_servo_angle_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack

        addStubsDebugLog("get_servo_angle_callback: writing output argument 1 \"angle\" (float)...");
        try
        {
            writeToStack(out_args.angle, p->stackID);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("write out arg 1 (angle): %s", ex.what());
        }

        addStubsDebugLog("get_servo_angle_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("get_servo_angle_callback: finished");
}

enable_gimbal_in::enable_gimbal_in()
{
}

enable_gimbal_out::enable_gimbal_out()
{
}

void enable_gimbal_callback(SScriptCallBack *p)
{
    addStubsDebugLog("enable_gimbal_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.enable_gimbal";

    enable_gimbal_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    enable_gimbal_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 2)
            throw sim::exception("not enough arguments");
        if(numArgs > 2)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("enable_gimbal_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }

        if(numArgs >= 2)
        {
            addStubsDebugLog("enable_gimbal_callback: reading input argument 2 \"value\" (bool)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.value));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 2 (value): %s", ex.what());
            }
        }


        addStubsDebugLog("enable_gimbal_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("enable_gimbal_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("enable_gimbal_callback: calling callback (enable_gimbal)");
        simRobomaster_enable_gimbal(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("enable_gimbal_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("enable_gimbal_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack


        addStubsDebugLog("enable_gimbal_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("enable_gimbal_callback: finished");
}

set_blaster_led_in::set_blaster_led_in()
{
}

set_blaster_led_out::set_blaster_led_out()
{
}

void set_blaster_led_callback(SScriptCallBack *p)
{
    addStubsDebugLog("set_blaster_led_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.set_blaster_led";

    set_blaster_led_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    set_blaster_led_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 2)
            throw sim::exception("not enough arguments");
        if(numArgs > 2)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("set_blaster_led_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }

        if(numArgs >= 2)
        {
            addStubsDebugLog("set_blaster_led_callback: reading input argument 2 \"intensity\" (float)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.intensity));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 2 (intensity): %s", ex.what());
            }
        }


        addStubsDebugLog("set_blaster_led_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("set_blaster_led_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("set_blaster_led_callback: calling callback (set_blaster_led)");
        simRobomaster_set_blaster_led(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("set_blaster_led_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("set_blaster_led_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack


        addStubsDebugLog("set_blaster_led_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("set_blaster_led_callback: finished");
}

move_servo_in::move_servo_in()
{
}

move_servo_out::move_servo_out()
{
}

void move_servo_callback(SScriptCallBack *p)
{
    addStubsDebugLog("move_servo_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.move_servo";

    move_servo_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    move_servo_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 3)
            throw sim::exception("not enough arguments");
        if(numArgs > 3)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("move_servo_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }

        if(numArgs >= 2)
        {
            addStubsDebugLog("move_servo_callback: reading input argument 2 \"servo\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.servo));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 2 (servo): %s", ex.what());
            }
        }

        if(numArgs >= 3)
        {
            addStubsDebugLog("move_servo_callback: reading input argument 3 \"angle\" (float)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.angle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 3 (angle): %s", ex.what());
            }
        }


        addStubsDebugLog("move_servo_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("move_servo_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("move_servo_callback: calling callback (move_servo)");
        simRobomaster_move_servo(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("move_servo_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("move_servo_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack

        addStubsDebugLog("move_servo_callback: writing output argument 1 \"handle\" (int)...");
        try
        {
            writeToStack(out_args.handle, p->stackID);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("write out arg 1 (handle): %s", ex.what());
        }

        addStubsDebugLog("move_servo_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("move_servo_callback: finished");
}

set_servo_target_speed_in::set_servo_target_speed_in()
{
}

set_servo_target_speed_out::set_servo_target_speed_out()
{
}

void set_servo_target_speed_callback(SScriptCallBack *p)
{
    addStubsDebugLog("set_servo_target_speed_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.set_servo_target_speed";

    set_servo_target_speed_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    set_servo_target_speed_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 3)
            throw sim::exception("not enough arguments");
        if(numArgs > 3)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("set_servo_target_speed_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }

        if(numArgs >= 2)
        {
            addStubsDebugLog("set_servo_target_speed_callback: reading input argument 2 \"servo\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.servo));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 2 (servo): %s", ex.what());
            }
        }

        if(numArgs >= 3)
        {
            addStubsDebugLog("set_servo_target_speed_callback: reading input argument 3 \"speed\" (float)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.speed));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 3 (speed): %s", ex.what());
            }
        }


        addStubsDebugLog("set_servo_target_speed_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("set_servo_target_speed_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("set_servo_target_speed_callback: calling callback (set_servo_target_speed)");
        simRobomaster_set_servo_target_speed(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("set_servo_target_speed_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("set_servo_target_speed_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack


        addStubsDebugLog("set_servo_target_speed_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("set_servo_target_speed_callback: finished");
}

set_servo_mode_in::set_servo_mode_in()
{
}

set_servo_mode_out::set_servo_mode_out()
{
}

void set_servo_mode_callback(SScriptCallBack *p)
{
    addStubsDebugLog("set_servo_mode_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.set_servo_mode";

    set_servo_mode_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    set_servo_mode_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 3)
            throw sim::exception("not enough arguments");
        if(numArgs > 3)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("set_servo_mode_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }

        if(numArgs >= 2)
        {
            addStubsDebugLog("set_servo_mode_callback: reading input argument 2 \"servo\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.servo));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 2 (servo): %s", ex.what());
            }
        }

        if(numArgs >= 3)
        {
            addStubsDebugLog("set_servo_mode_callback: reading input argument 3 \"mode\" (std::string)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.mode));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 3 (mode): %s", ex.what());
            }
        }


        addStubsDebugLog("set_servo_mode_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("set_servo_mode_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("set_servo_mode_callback: calling callback (set_servo_mode)");
        simRobomaster_set_servo_mode(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("set_servo_mode_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("set_servo_mode_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack


        addStubsDebugLog("set_servo_mode_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("set_servo_mode_callback: finished");
}

enable_servo_in::enable_servo_in()
{
}

enable_servo_out::enable_servo_out()
{
}

void enable_servo_callback(SScriptCallBack *p)
{
    addStubsDebugLog("enable_servo_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.enable_servo";

    enable_servo_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    enable_servo_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 3)
            throw sim::exception("not enough arguments");
        if(numArgs > 3)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("enable_servo_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }

        if(numArgs >= 2)
        {
            addStubsDebugLog("enable_servo_callback: reading input argument 2 \"servo\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.servo));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 2 (servo): %s", ex.what());
            }
        }

        if(numArgs >= 3)
        {
            addStubsDebugLog("enable_servo_callback: reading input argument 3 \"value\" (bool)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.value));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 3 (value): %s", ex.what());
            }
        }


        addStubsDebugLog("enable_servo_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("enable_servo_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("enable_servo_callback: calling callback (enable_servo)");
        simRobomaster_enable_servo(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("enable_servo_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("enable_servo_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack


        addStubsDebugLog("enable_servo_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("enable_servo_callback: finished");
}

set_mode_in::set_mode_in()
{
}

set_mode_out::set_mode_out()
{
}

void set_mode_callback(SScriptCallBack *p)
{
    addStubsDebugLog("set_mode_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.set_mode";

    set_mode_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    set_mode_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 2)
            throw sim::exception("not enough arguments");
        if(numArgs > 2)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("set_mode_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }

        if(numArgs >= 2)
        {
            addStubsDebugLog("set_mode_callback: reading input argument 2 \"mode\" (std::string)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.mode));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 2 (mode): %s", ex.what());
            }
        }


        addStubsDebugLog("set_mode_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("set_mode_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("set_mode_callback: calling callback (set_mode)");
        simRobomaster_set_mode(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("set_mode_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("set_mode_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack


        addStubsDebugLog("set_mode_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("set_mode_callback: finished");
}

enable_distance_sensor_in::enable_distance_sensor_in()
{
}

enable_distance_sensor_out::enable_distance_sensor_out()
{
}

void enable_distance_sensor_callback(SScriptCallBack *p)
{
    addStubsDebugLog("enable_distance_sensor_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.enable_distance_sensor";

    enable_distance_sensor_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    enable_distance_sensor_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 3)
            throw sim::exception("not enough arguments");
        if(numArgs > 3)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("enable_distance_sensor_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }

        if(numArgs >= 2)
        {
            addStubsDebugLog("enable_distance_sensor_callback: reading input argument 2 \"port\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.port));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 2 (port): %s", ex.what());
            }
        }

        if(numArgs >= 3)
        {
            addStubsDebugLog("enable_distance_sensor_callback: reading input argument 3 \"sensor_handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.sensor_handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 3 (sensor_handle): %s", ex.what());
            }
        }


        addStubsDebugLog("enable_distance_sensor_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("enable_distance_sensor_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("enable_distance_sensor_callback: calling callback (enable_distance_sensor)");
        simRobomaster_enable_distance_sensor(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("enable_distance_sensor_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("enable_distance_sensor_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack


        addStubsDebugLog("enable_distance_sensor_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("enable_distance_sensor_callback: finished");
}

disable_distance_sensor_in::disable_distance_sensor_in()
{
}

disable_distance_sensor_out::disable_distance_sensor_out()
{
}

void disable_distance_sensor_callback(SScriptCallBack *p)
{
    addStubsDebugLog("disable_distance_sensor_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.disable_distance_sensor";

    disable_distance_sensor_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    disable_distance_sensor_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 2)
            throw sim::exception("not enough arguments");
        if(numArgs > 2)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("disable_distance_sensor_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }

        if(numArgs >= 2)
        {
            addStubsDebugLog("disable_distance_sensor_callback: reading input argument 2 \"port\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.port));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 2 (port): %s", ex.what());
            }
        }


        addStubsDebugLog("disable_distance_sensor_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("disable_distance_sensor_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("disable_distance_sensor_callback: calling callback (disable_distance_sensor)");
        simRobomaster_disable_distance_sensor(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("disable_distance_sensor_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("disable_distance_sensor_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack


        addStubsDebugLog("disable_distance_sensor_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("disable_distance_sensor_callback: finished");
}

get_distance_reading_in::get_distance_reading_in()
{
}

get_distance_reading_out::get_distance_reading_out()
{
}

void get_distance_reading_callback(SScriptCallBack *p)
{
    addStubsDebugLog("get_distance_reading_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.get_distance_reading";

    get_distance_reading_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    get_distance_reading_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 2)
            throw sim::exception("not enough arguments");
        if(numArgs > 2)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("get_distance_reading_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }

        if(numArgs >= 2)
        {
            addStubsDebugLog("get_distance_reading_callback: reading input argument 2 \"port\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.port));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 2 (port): %s", ex.what());
            }
        }


        addStubsDebugLog("get_distance_reading_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("get_distance_reading_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("get_distance_reading_callback: calling callback (get_distance_reading)");
        simRobomaster_get_distance_reading(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("get_distance_reading_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("get_distance_reading_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack

        addStubsDebugLog("get_distance_reading_callback: writing output argument 1 \"distance\" (float)...");
        try
        {
            writeToStack(out_args.distance, p->stackID);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("write out arg 1 (distance): %s", ex.what());
        }

        addStubsDebugLog("get_distance_reading_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("get_distance_reading_callback: finished");
}

set_log_level_in::set_log_level_in()
{
}

set_log_level_out::set_log_level_out()
{
}

void set_log_level_callback(SScriptCallBack *p)
{
    addStubsDebugLog("set_log_level_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.set_log_level";

    set_log_level_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    set_log_level_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 1)
            throw sim::exception("not enough arguments");
        if(numArgs > 1)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("set_log_level_callback: reading input argument 1 \"log_level\" (std::string)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.log_level));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (log_level): %s", ex.what());
            }
        }


        addStubsDebugLog("set_log_level_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("set_log_level_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("set_log_level_callback: calling callback (set_log_level)");
        simRobomaster_set_log_level(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("set_log_level_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("set_log_level_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack


        addStubsDebugLog("set_log_level_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("set_log_level_callback: finished");
}

get_handles_in::get_handles_in()
{
}

get_handles_out::get_handles_out()
{
}

void get_handles_callback(SScriptCallBack *p)
{
    addStubsDebugLog("get_handles_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.get_handles";

    get_handles_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    get_handles_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 0)
            throw sim::exception("not enough arguments");
        if(numArgs > 0)
            throw sim::exception("too many arguments");

        // read input arguments from stack


        addStubsDebugLog("get_handles_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("get_handles_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("get_handles_callback: calling callback (get_handles)");
        simRobomaster_get_handles(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("get_handles_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("get_handles_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack

        addStubsDebugLog("get_handles_callback: writing output argument 1 \"handles\" (std::vector< int >)...");
        try
        {
            writeToStack(out_args.handles, p->stackID);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("write out arg 1 (handles): %s", ex.what());
        }

        addStubsDebugLog("get_handles_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("get_handles_callback: finished");
}

set_vision_class_in::set_vision_class_in()
{
}

set_vision_class_out::set_vision_class_out()
{
}

void set_vision_class_callback(SScriptCallBack *p)
{
    addStubsDebugLog("set_vision_class_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.set_vision_class";

    set_vision_class_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    set_vision_class_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 3)
            throw sim::exception("not enough arguments");
        if(numArgs > 3)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("set_vision_class_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }

        if(numArgs >= 2)
        {
            addStubsDebugLog("set_vision_class_callback: reading input argument 2 \"name\" (std::string)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.name));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 2 (name): %s", ex.what());
            }
        }

        if(numArgs >= 3)
        {
            addStubsDebugLog("set_vision_class_callback: reading input argument 3 \"type\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.type));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 3 (type): %s", ex.what());
            }
        }


        addStubsDebugLog("set_vision_class_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("set_vision_class_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("set_vision_class_callback: calling callback (set_vision_class)");
        simRobomaster_set_vision_class(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("set_vision_class_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("set_vision_class_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack


        addStubsDebugLog("set_vision_class_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("set_vision_class_callback: finished");
}

configure_vision_in::configure_vision_in()
{
    min_width = 0.5;
    min_height = 0.5;
    tolerance = 0.0;
}

configure_vision_out::configure_vision_out()
{
}

void configure_vision_callback(SScriptCallBack *p)
{
    addStubsDebugLog("configure_vision_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.configure_vision";

    configure_vision_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    configure_vision_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 1)
            throw sim::exception("not enough arguments");
        if(numArgs > 4)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("configure_vision_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }

        if(numArgs >= 2)
        {
            addStubsDebugLog("configure_vision_callback: reading input argument 2 \"min_width\" (float)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.min_width));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 2 (min_width): %s", ex.what());
            }
        }

        if(numArgs >= 3)
        {
            addStubsDebugLog("configure_vision_callback: reading input argument 3 \"min_height\" (float)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.min_height));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 3 (min_height): %s", ex.what());
            }
        }

        if(numArgs >= 4)
        {
            addStubsDebugLog("configure_vision_callback: reading input argument 4 \"tolerance\" (float)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.tolerance));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 4 (tolerance): %s", ex.what());
            }
        }


        addStubsDebugLog("configure_vision_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("configure_vision_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("configure_vision_callback: calling callback (configure_vision)");
        simRobomaster_configure_vision(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("configure_vision_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("configure_vision_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack


        addStubsDebugLog("configure_vision_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("configure_vision_callback: finished");
}

enable_vision_in::enable_vision_in()
{
}

enable_vision_out::enable_vision_out()
{
}

void enable_vision_callback(SScriptCallBack *p)
{
    addStubsDebugLog("enable_vision_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.enable_vision";

    enable_vision_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    enable_vision_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 2)
            throw sim::exception("not enough arguments");
        if(numArgs > 2)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("enable_vision_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }

        if(numArgs >= 2)
        {
            addStubsDebugLog("enable_vision_callback: reading input argument 2 \"mask\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.mask));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 2 (mask): %s", ex.what());
            }
        }


        addStubsDebugLog("enable_vision_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("enable_vision_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("enable_vision_callback: calling callback (enable_vision)");
        simRobomaster_enable_vision(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("enable_vision_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("enable_vision_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack


        addStubsDebugLog("enable_vision_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("enable_vision_callback: finished");
}

get_detected_robots_in::get_detected_robots_in()
{
}

get_detected_robots_out::get_detected_robots_out()
{
}

void get_detected_robots_callback(SScriptCallBack *p)
{
    addStubsDebugLog("get_detected_robots_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.get_detected_robots";

    get_detected_robots_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    get_detected_robots_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 1)
            throw sim::exception("not enough arguments");
        if(numArgs > 1)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("get_detected_robots_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }


        addStubsDebugLog("get_detected_robots_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("get_detected_robots_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("get_detected_robots_callback: calling callback (get_detected_robots)");
        simRobomaster_get_detected_robots(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("get_detected_robots_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("get_detected_robots_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack

        addStubsDebugLog("get_detected_robots_callback: writing output argument 1 \"bounding_boxes\" (std::vector< CS_BoundingBox >)...");
        try
        {
            writeToStack(out_args.bounding_boxes, p->stackID);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("write out arg 1 (bounding_boxes): %s", ex.what());
        }

        addStubsDebugLog("get_detected_robots_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("get_detected_robots_callback: finished");
}

get_detected_people_in::get_detected_people_in()
{
}

get_detected_people_out::get_detected_people_out()
{
}

void get_detected_people_callback(SScriptCallBack *p)
{
    addStubsDebugLog("get_detected_people_callback: reading input arguments...");
    addStubsDebugStackDump(p->stackID);

    const char *cmd = "simRobomaster.get_detected_people";

    get_detected_people_in in_args;
    if(p)
    {
        std::memcpy(&in_args._, p, sizeof(SScriptCallBack));
    }
    get_detected_people_out out_args;

    try
    {
        // check argument count

        int numArgs = sim::getStackSize(p->stackID);
        if(numArgs < 1)
            throw sim::exception("not enough arguments");
        if(numArgs > 1)
            throw sim::exception("too many arguments");

        // read input arguments from stack

        if(numArgs >= 1)
        {
            addStubsDebugLog("get_detected_people_callback: reading input argument 1 \"handle\" (int)...");
            try
            {
                sim::moveStackItemToTop(p->stackID, 0);
                readFromStack(p->stackID, &(in_args.handle));
            }
            catch(std::exception &ex)
            {
                throw sim::exception("read in arg 1 (handle): %s", ex.what());
            }
        }


        addStubsDebugLog("get_detected_people_callback: stack content after reading input arguments:");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("get_detected_people_callback: clearing stack content after reading input arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        addStubsDebugLog("get_detected_people_callback: calling callback (get_detected_people)");
        simRobomaster_get_detected_people(&in_args, &out_args);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
    }

    try
    {
        addStubsDebugLog("get_detected_people_callback: writing output arguments...");
        addStubsDebugStackDump(p->stackID);

        addStubsDebugLog("get_detected_people_callback: clearing stack content before writing output arguments");
        // clear stack
        sim::popStackItem(p->stackID, 0);


        // write output arguments to stack

        addStubsDebugLog("get_detected_people_callback: writing output argument 1 \"bounding_boxes\" (std::vector< CS_BoundingBox >)...");
        try
        {
            writeToStack(out_args.bounding_boxes, p->stackID);
        }
        catch(std::exception &ex)
        {
            throw sim::exception("write out arg 1 (bounding_boxes): %s", ex.what());
        }

        addStubsDebugLog("get_detected_people_callback: stack content after writing output arguments:");
        addStubsDebugStackDump(p->stackID);
    }
    catch(std::exception &ex)
    {
        sim::setLastError(ex.what());
        // clear stack
        try { sim::popStackItem(p->stackID, 0); } catch(...) {}
    }

    addStubsDebugLog("get_detected_people_callback: finished");
}

