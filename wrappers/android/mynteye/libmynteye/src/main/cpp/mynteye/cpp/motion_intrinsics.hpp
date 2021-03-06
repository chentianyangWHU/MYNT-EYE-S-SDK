// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from mynteye_types.djinni

#pragma once

#include "imu_intrinsics.hpp"
#include <utility>

namespace mynteye_jni {

/** Motion intrinsics, including accelerometer and gyroscope */
struct MotionIntrinsics final {
    /** Accelerometer intrinsics */
    ImuIntrinsics accel;
    /** Gyroscope intrinsics */
    ImuIntrinsics gyro;

    MotionIntrinsics(ImuIntrinsics accel_,
                     ImuIntrinsics gyro_)
    : accel(std::move(accel_))
    , gyro(std::move(gyro_))
    {}
};

}  // namespace mynteye_jni
