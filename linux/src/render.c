/*
 * <sidescroller> <linux/src/render.c> | Copyright (c) <2024> <gabriel guitián estrella>
 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but without ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <https://www.gnu.org/licenses/>.
*/

#include <vulkan/vulkan.h>
#include "render.h"

const VkApplicationInfo vkApplicationInfo = {
  .sType = VK_STRUCTURE_TYPE_APPLICATION_INFO,
  .pNext = NULL,
  .pApplicationName = general_name,
  .applicationVersion = 0,
  .pEngineName = general_name,
  .engineVersion = 0,
  .apiVersion = VK_API_VERSION_1_3
};

const VkInstanceCreateInfo vkInstanceCreateInfo = {
  .sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO,
  .pNext = NULL,
  .flags = VK_INSTANCE_CREATE_ENUMERATE_PORTABILITY_BIT_KHR,
  .pApplicationInfo = &vkApplicationInfo,
  .enabledLayerCount = 1,
  .ppEnabledLayerNames = layer_name,
  .enabledExtensionCount = 0,
  .ppEnabledExtensionNames = 0;
};

int render() {
  vkCreateInstance(*vkInstanceCreateInfo, pAllocator, VkInstance);
  return 0;
}
