#ifndef ECO_MATERIALS_H
#define ECO_MATERIALS_H

// Include necessary libraries
#include <stdbool.h>

// Define the structure for eco materials
typedef struct {
    bool recycled_materials; // true if the watch casing is made from recycled materials
    bool eco_packaging; // true if the packaging is eco-friendly
} EcoMaterials;

// Function to initialize eco materials
EcoMaterials init_eco_materials(bool recycled_materials, bool eco_packaging);

// Function to check if the watch casing is made from recycled materials
bool is_recycled_materials(EcoMaterials *eco_materials);

// Function to check if the packaging is eco-friendly
bool is_eco_packaging(EcoMaterials *eco_materials);

#endif //ECO_MATERIALS_H
