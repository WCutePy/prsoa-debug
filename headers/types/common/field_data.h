#ifndef HEADERS_TYPES_COMMON_FIELD_DATA_H_
#define HEADERS_TYPES_COMMON_FIELD_DATA_H_

// Extracted file data from field_data.bin.  
struct field_data {
    struct file_wrapper* field_data_file_wrapper;
    void* npc_data;   // Not currently understood, but described as such by field_data.bin
    void* enemy_data; // Not currently understood, but described as such by field_data.bin
    void* tobj_data;  // Not currently understood, but described as such by field_data.bin
    void* map_data;   // Not currently understood, but described as such by field_data.bin
};
ASSERT_SIZE(struct field_data, 20);

#endif