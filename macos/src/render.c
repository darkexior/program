#include "render.h"
#include <vulkan/vulkan.h>
#include <stdio.h>
#include <stdlib.h>

int render() {
  vkCreateInstance(pCreateInfo, pAllocator, pInstance);
  return 0;
}

VkInstanceCreateInfo vkInstanceCreateInfo = {
    .sType = 0,
    .pNext = NULL,
    .flags = VK_INSTANCE_CREATE_ENUMERATE_PORTABILITY_BIT_KHR,
    .pApplicationInfo = *vkApplicationInfo,
    .ppEnabledLayerNames = ,
    .enabledExtensionCount = ,
    .ppEnabledExtensionNames = ,
};

VkApplicationInfo vkApplicationInfo = {
  .sType = 0,
  .pNext = NULL,
  .pApplicationName = 0x0,
}
