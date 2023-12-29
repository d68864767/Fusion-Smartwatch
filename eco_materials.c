```c
#include "eco_materials.h"

// Define the materials used in the watch casing and packaging
typedef struct {
    char* casing_material;
    char* packaging_material;
} EcoMaterials;

// Initialize the eco-friendly materials
EcoMaterials init_eco_materials() {
    EcoMaterials materials;
    materials.casing_material = "Recycled Aluminum";
    materials.packaging_material = "Recycled Paper";
    return materials;
}

// Get the material used for the watch casing
char* get_casing_material(EcoMaterials materials) {
    return materials.casing_material;
}

// Get the material used for the packaging
char* get_packaging_material(EcoMaterials materials) {
    return materials.packaging_material;
}

// Set the material used for the watch casing
void set_casing_material(EcoMaterials* materials, char* new_material) {
    materials->casing_material = new_material;
}

// Set the material used for the packaging
void set_packaging_material(EcoMaterials* materials, char* new_material) {
    materials->packaging_material = new_material;
}
```
