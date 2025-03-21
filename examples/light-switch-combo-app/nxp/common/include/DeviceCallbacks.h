/*
 *
 *    Copyright (c) 2025 Project CHIP Authors
 *    All rights reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

/**
 * @file DeviceCallbacks.h
 *
 * Lighting app implementation for the DeviceManager callbacks for all applications
 *
 **/

#pragma once

#include "CHIPDeviceManager.h"
#include "CommonDeviceCallbacks.h"

namespace LightSwitchComboApp {

class DeviceCallbacks : public chip::NXP::App::CommonDeviceCallbacks
{
public:
    void PostAttributeChangeCallback(chip::EndpointId endpoint, chip::ClusterId clusterId, chip::AttributeId attributeId,
                                     uint8_t type, uint16_t size, uint8_t * value) override;
};

} // namespace LightSwitchComboApp

namespace chip::NXP::App {
/**
 * Returns the application-specific implementation of the CommonDeviceCallbacks object.
 *
 * Applications can use this to gain access to features of the CommonDeviceCallbacks
 * that are specific to the selected application.
 */
chip::DeviceManager::CHIPDeviceManagerCallbacks & GetDeviceCallbacks();

} //namespace chip::NXP::App
