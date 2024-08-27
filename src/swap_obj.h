/**
 * @file swap_obj.h
 * @author Bryce Deary (bryce.deary@litegear.com)
 * @brief swap two objects
 * 
 * @copyright Copyright LightGear (2024)
 * 
 */
#ifndef SWAP_OBJ_H
#define SWAP_OBJ_H

#include <stddef.h> 

void *swap_obj(void *a, void *b, size_t objSize);

#endif // SWAP_OBJ_H
