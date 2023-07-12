Lights1 bewer_bomp_side_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 bewer_bomp_face_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 bewer_spike_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx bewer_bomp_side_ci8_aligner[] = {gsSPEndDisplayList()};
u8 bewer_bomp_side_ci8[] = {
	0x00, 0x01, 0x02, 0x03, 0x03, 0x04, 0x05, 0x06, 
	0x03, 0x07, 0x08, 0x09, 0x0a, 0x03, 0x0b, 0x0c, 
	0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 
	0x14, 0x15, 0x09, 0x0d, 0x02, 0x0c, 0x03, 0x0d, 
	0x06, 0x09, 0x05, 0x03, 0x06, 0x02, 0x06, 0x16, 
	0x17, 0x18, 0x19, 0x1a, 0x1b, 0x0b, 0x0c, 0x16, 
	0x0b, 0x17, 0x1c, 0x1d, 0x1e, 0x15, 0x1f, 0x20, 
	0x21, 0x22, 0x23, 0x00, 0x24, 0x24, 0x06, 0x06, 
	0x06, 0x03, 0x03, 0x24, 0x02, 0x06, 0x0d, 0x0d, 
	0x0b, 0x06, 0x03, 0x00, 0x25, 0x26, 0x0d, 0x0d, 
	0x27, 0x28, 0x29, 0x2a, 0x16, 0x2b, 0x2c, 0x16, 
	0x18, 0x25, 0x2d, 0x2e, 0x0b, 0x18, 0x0c, 0x03, 
	0x02, 0x02, 0x24, 0x03, 0x0d, 0x2f, 0x2b, 0x0d, 
	0x30, 0x0c, 0x0d, 0x0d, 0x31, 0x32, 0x33, 0x27, 
	0x25, 0x25, 0x34, 0x35, 0x36, 0x37, 0x34, 0x00, 
	0x03, 0x38, 0x39, 0x2e, 0x30, 0x0c, 0x0b, 0x0c, 
	0x03, 0x03, 0x30, 0x0c, 0x0d, 0x0d, 0x3a, 0x0c, 
	0x3b, 0x03, 0x0d, 0x2f, 0x3c, 0x3d, 0x00, 0x3e, 
	0x17, 0x3f, 0x40, 0x00, 0x00, 0x41, 0x42, 0x42, 
	0x42, 0x34, 0x43, 0x44, 0x45, 0x46, 0x47, 0x0c, 
	0x03, 0x03, 0x30, 0x30, 0x0d, 0x02, 0x2b, 0x03, 
	0x2b, 0x03, 0x02, 0x48, 0x07, 0x49, 0x3f, 0x46, 
	0x24, 0x30, 0x4a, 0x35, 0x18, 0x35, 0x0d, 0x34, 
	0x41, 0x34, 0x4b, 0x4c, 0x4d, 0x4e, 0x24, 0x05, 
	0x03, 0x2b, 0x24, 0x03, 0x02, 0x0d, 0x0c, 0x16, 
	0x4f, 0x35, 0x24, 0x00, 0x50, 0x0f, 0x51, 0x04, 
	0x04, 0x52, 0x27, 0x20, 0x53, 0x18, 0x0d, 0x0d, 
	0x03, 0x54, 0x55, 0x56, 0x57, 0x58, 0x0c, 0x46, 
	0x35, 0x59, 0x0c, 0x09, 0x09, 0x02, 0x4f, 0x2b, 
	0x16, 0x46, 0x17, 0x5a, 0x26, 0x5b, 0x04, 0x0f, 
	0x30, 0x17, 0x0d, 0x1d, 0x17, 0x5c, 0x0f, 0x51, 
	0x5d, 0x5e, 0x1d, 0x3d, 0x2e, 0x5f, 0x60, 0x0c, 
	0x0d, 0x0d, 0x0d, 0x0d, 0x02, 0x61, 0x61, 0x16, 
	0x2b, 0x34, 0x16, 0x44, 0x30, 0x51, 0x30, 0x04, 
	0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 
	0x1d, 0x4a, 0x0f, 0x58, 0x6a, 0x2d, 0x05, 0x02, 
	0x0d, 0x00, 0x0d, 0x0d, 0x0d, 0x35, 0x59, 0x2b, 
	0x36, 0x35, 0x6b, 0x6c, 0x6d, 0x04, 0x05, 0x30, 
	0x62, 0x0d, 0x62, 0x26, 0x6e, 0x11, 0x6e, 0x6f, 
	0x17, 0x3e, 0x3f, 0x0f, 0x38, 0x1b, 0x40, 0x0b, 
	0x01, 0x0d, 0x41, 0x0d, 0x0d, 0x03, 0x18, 0x0c, 
	0x70, 0x6f, 0x50, 0x4e, 0x06, 0x04, 0x62, 0x6d, 
	0x30, 0x02, 0x71, 0x27, 0x72, 0x0f, 0x73, 0x58, 
	0x74, 0x0b, 0x63, 0x46, 0x75, 0x74, 0x4a, 0x26, 
	0x76, 0x0b, 0x03, 0x09, 0x0d, 0x16, 0x77, 0x78, 
	0x79, 0x7a, 0x7b, 0x1b, 0x4e, 0x04, 0x30, 0x7c, 
	0x04, 0x7d, 0x7e, 0x65, 0x0f, 0x6d, 0x7d, 0x17, 
	0x17, 0x04, 0x04, 0x0c, 0x0c, 0x3f, 0x08, 0x77, 
	0x2d, 0x2d, 0x7f, 0x44, 0x80, 0x78, 0x49, 0x16, 
	0x39, 0x2c, 0x6a, 0x81, 0x76, 0x51, 0x05, 0x62, 
	0x6d, 0x17, 0x82, 0x80, 0x51, 0x30, 0x04, 0x63, 
	0x38, 0x30, 0x46, 0x17, 0x0c, 0x83, 0x0d, 0x84, 
	0x0d, 0x18, 0x0d, 0x0d, 0x85, 0x16, 0x0a, 0x18, 
	0x03, 0x0d, 0x0b, 0x35, 0x40, 0x86, 0x62, 0x6d, 
	0x0b, 0x04, 0x84, 0x30, 0x6d, 0x87, 0x24, 0x0b, 
	0x0b, 0x17, 0x46, 0x0b, 0x75, 0x16, 0x88, 0x08, 
	0x2b, 0x18, 0x18, 0x49, 0x85, 0x0a, 0x03, 0x2b, 
	0x0c, 0x03, 0x05, 0x18, 0x44, 0x51, 0x62, 0x17, 
	0x17, 0x55, 0x6b, 0x89, 0x8a, 0x8b, 0x03, 0x05, 
	0x46, 0x0f, 0x0c, 0x03, 0x0c, 0x74, 0x0a, 0x08, 
	0x6b, 0x8c, 0x8d, 0x78, 0x25, 0x0c, 0x03, 0x0b, 
	0x03, 0x05, 0x03, 0x0a, 0x8e, 0x02, 0x0e, 0x0b, 
	0x8f, 0x1e, 0x1b, 0x6d, 0x1b, 0x46, 0x46, 0x24, 
	0x0b, 0x0b, 0x0b, 0x3f, 0x90, 0x0b, 0x20, 0x08, 
	0x26, 0x0d, 0x00, 0x0c, 0x3f, 0x0c, 0x03, 0x02, 
	0x91, 0x03, 0x0a, 0x2b, 0x49, 0x26, 0x41, 0x04, 
	0x3b, 0x65, 0x7d, 0x7d, 0x6d, 0x24, 0x30, 0x30, 
	0x63, 0x83, 0x0f, 0x66, 0x92, 0x20, 0x08, 0x40, 
	0x09, 0x4e, 0x03, 0x24, 0x0c, 0x16, 0x16, 0x0b, 
	0x16, 0x16, 0x0a, 0x16, 0x00, 0x22, 0x93, 0x4a, 
	0x6b, 0x94, 0x7e, 0x71, 0x46, 0x02, 0x63, 0x95, 
	0x62, 0x96, 0x92, 0x29, 0x6f, 0x21, 0x44, 0x00, 
	0x44, 0x34, 0x1b, 0x03, 0x46, 0x0c, 0x46, 0x0b, 
	0x18, 0x18, 0x0b, 0x16, 0x97, 0x3d, 0x98, 0x00, 
	0x0a, 0x44, 0x22, 0x99, 0x99, 0x7d, 0x9a, 0x7e, 
	0x92, 0x68, 0x77, 0x0a, 0x1b, 0x34, 0x9b, 0x9c, 
	0x10, 0x0d, 0x09, 0x34, 0x00, 0x30, 0x24, 0x24, 
	0x46, 0x2c, 0x17, 0x0a, 0x9d, 0x70, 0x5b, 0x7d, 
	0x04, 0x97, 0x1e, 0x9e, 0x9f, 0x2d, 0x29, 0x11, 
	0x50, 0x09, 0x34, 0x44, 0x24, 0x79, 0x4c, 0xa0, 
	0x6f, 0x15, 0x03, 0x02, 0x62, 0x05, 0x05, 0x0b, 
	0x0b, 0x2b, 0x2c, 0x53, 0x70, 0x41, 0x05, 0x4e, 
	0x30, 0x0b, 0x2a, 0xa1, 0xa2, 0x11, 0x65, 0x4f, 
	0x54, 0x0b, 0xa3, 0x0d, 0xa3, 0x61, 0x34, 0x79, 
	0x03, 0x1e, 0x49, 0x17, 0x0c, 0x05, 0x03, 0x0c, 
	0x05, 0x47, 0x2b, 0x4f, 0x41, 0x1b, 0x30, 0x03, 
	0x30, 0x30, 0x8d, 0x1e, 0x6b, 0x00, 0x88, 0x18, 
	0x3b, 0x0d, 0x18, 0x0c, 0x0d, 0x87, 0x03, 0x2b, 
	0x0c, 0x03, 0x6b, 0x40, 0x17, 0x24, 0x04, 0x0c, 
	0x16, 0x16, 0x4f, 0x18, 0x24, 0x26, 0x06, 0x09, 
	0x30, 0x87, 0x3b, 0x26, 0x4f, 0xa4, 0x24, 0x02, 
	0x47, 0x2b, 0x0c, 0x16, 0x18, 0x64, 0x02, 0x0d, 
	0x0b, 0x0b, 0x0b, 0x6b, 0x40, 0x3e, 0x17, 0x4f, 
	0x4f, 0x2b, 0x4f, 0x60, 0x2b, 0x15, 0x24, 0x02, 
	0xa5, 0x9a, 0x8d, 0x55, 0xa6, 0x16, 0x0d, 0x03, 
	0x2f, 0x0b, 0x0d, 0x2b, 0x2b, 0x2b, 0xa7, 0x0b, 
	0x03, 0x0c, 0x0d, 0xa8, 0x2d, 0x6c, 0x17, 0x3a, 
	0x18, 0x16, 0x18, 0x53, 0x70, 0x5a, 0x02, 0x9e, 
	0xa9, 0x8a, 0x8d, 0x80, 0x2b, 0x03, 0x0c, 0x0c, 
	0x03, 0x03, 0x47, 0x0d, 0x36, 0x2b, 0x3c, 0x03, 
	0x1b, 0x57, 0x8c, 0x01, 0x4a, 0x77, 0xa6, 0x16, 
	0x2b, 0x0a, 0x16, 0x0a, 0x35, 0x5a, 0x3b, 0x8b, 
	0x76, 0xaa, 0xab, 0x49, 0x00, 0x05, 0x35, 0x0d, 
	0x03, 0x36, 0x16, 0x2b, 0x34, 0x03, 0x2b, 0x35, 
	0x78, 0xac, 0xad, 0xae, 0x6c, 0xaf, 0xa8, 0x6a, 
	0x18, 0x16, 0x0d, 0x00, 0x97, 0x22, 0x04, 0x30, 
	0x7e, 0x96, 0x6d, 0x1b, 0x34, 0x18, 0x64, 0xb0, 
	0x61, 0x59, 0x0d, 0x03, 0x2b, 0xb1, 0x39, 0x15, 
	0xb2, 0xb3, 0xab, 0x82, 0x25, 0x40, 0xa8, 0x34, 
	0xa6, 0xb4, 0xa6, 0x0d, 0x44, 0x44, 0x54, 0x3b, 
	0xb5, 0xb6, 0xb7, 0x7f, 0x1b, 0x16, 0x16, 0xb8, 
	0x64, 0x03, 0x0d, 0x30, 0x0a, 0x25, 0x84, 0x6f, 
	0x23, 0x8a, 0x8a, 0x5f, 0xab, 0x79, 0x7f, 0x8c, 
	0x26, 0xaf, 0x78, 0x27, 0x82, 0x82, 0xa3, 0x03, 
	0xb9, 0x9f, 0x2a, 0x25, 0x25, 0xb0, 0x4f, 0x59, 
	0x2b, 0x16, 0x03, 0x0a, 0x00, 0x82, 0x8d, 0x46, 
	0x02, 0x06, 0x23, 0x25, 0x0b, 0xba, 0xbb, 0x82, 
	0x2d, 0x4a, 0x6f, 0x79, 0x00, 0x25, 0x6f, 0xaf, 
	0x5f, 0x8e, 0x16, 0x6a, 0x1b, 0x26, 0x43, 0x59, 
	0x0d, 0x59, 0x0a, 0x79, 0xbc, 0x0d, 0x3e, 0x06, 
	0x09, 0x4e, 0x09, 0x0d, 0x59, 0x18, 0x2c, 0x2f, 
	0x00, 0x72, 0x35, 0x0a, 0x00, 0x62, 0x2b, 0x3d, 
	0x5a, 0x58, 0x16, 0x0c, 0xa6, 0xbd, 0x87, 0x4f, 
	0xb0, 0x52, 0x78, 0x33, 0x0c, 0x53, 0x24, 0x09, 
	0x0d, 0x0d, 0x02, 0x03, 0x03, 0x16, 0x4f, 0x46, 
	0xa8, 0x94, 0x80, 0x4f, 0x0d, 0x00, 0x0b, 0x70, 
	0x1b, 0x0c, 0x0c, 0x59, 0xb8, 0x35, 0x9b, 0x4d, 
	0x41, 0x27, 0x77, 0x74, 0x6a, 0x75, 0x0c, 0x0d, 
	
};

Gfx bewer_bomp_side_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 bewer_bomp_side_ci8_pal_rgba16[] = {
	0x9c, 0xa5, 0x94, 0x61, 0xac, 0xa5, 0xac, 0xe7, 
	0xbd, 0x27, 0xb5, 0x27, 0xac, 0xe5, 0x6b, 0x19, 
	0x5a, 0x53, 0x9c, 0xa3, 0xc5, 0xaf, 0xbd, 0x6b, 
	0xb5, 0x29, 0xa4, 0xa5, 0xcd, 0xed, 0xc5, 0xab, 
	0x41, 0x8d, 0x10, 0x43, 0x39, 0x47, 0x83, 0x15, 
	0xbc, 0xe5, 0x83, 0x5b, 0xb5, 0x2b, 0xc5, 0xad, 
	0xbd, 0x6d, 0x84, 0x23, 0x6b, 0x17, 0x94, 0x1f, 
	0x72, 0xd5, 0x08, 0x01, 0x4a, 0x0f, 0x51, 0xcf, 
	0x31, 0x09, 0x31, 0x49, 0x6a, 0x93, 0x94, 0x5f, 
	0xb4, 0xe7, 0x8b, 0xdf, 0x8b, 0xdd, 0x5a, 0x51, 
	0x49, 0x8b, 0x18, 0x85, 0x52, 0x53, 0xac, 0xe9, 
	0xbd, 0xaf, 0x52, 0x0f, 0x73, 0x59, 0xad, 0x29, 
	0xb4, 0xe5, 0xc5, 0xf5, 0x6a, 0xd9, 0x39, 0x8b, 
	0x94, 0x63, 0xa4, 0xa7, 0xa4, 0xe7, 0x9c, 0x65, 
	0xcd, 0xaf, 0xce, 0x35, 0xb5, 0x2d, 0xac, 0xa3, 
	0xad, 0x2b, 0x5a, 0x95, 0xd6, 0x31, 0xcd, 0xef, 
	0x73, 0x17, 0x94, 0x21, 0x93, 0xe1, 0xb5, 0x6f, 
	0x6a, 0xd7, 0x94, 0x1b, 0xbd, 0x29, 0xbd, 0xad, 
	0xc5, 0xb3, 0x83, 0x9b, 0x49, 0xcd, 0xd6, 0x77, 
	0x94, 0xa5, 0x7b, 0x57, 0xa4, 0xa3, 0xb5, 0x6d, 
	0x4a, 0x11, 0xcd, 0xab, 0xc5, 0xef, 0xce, 0x33, 
	0xe6, 0xf7, 0x8b, 0x9b, 0x28, 0xc7, 0x7b, 0x19, 
	0xde, 0x73, 0xac, 0xa7, 0x83, 0x9d, 0xd5, 0xef, 
	0xde, 0xb5, 0x83, 0x19, 0x20, 0x43, 0x8b, 0xdb, 
	0xd6, 0x35, 0xb4, 0xe9, 0xbd, 0x69, 0xc5, 0x6b, 
	0xbd, 0x6f, 0x41, 0xcf, 0x8b, 0x99, 0x7a, 0xd5, 
	0x39, 0x49, 0x10, 0x01, 0xcd, 0xf3, 0x52, 0x11, 
	0x7b, 0x17, 0xbd, 0x25, 0x20, 0xc7, 0x62, 0x95, 
	0x94, 0x65, 0xc5, 0x67, 0x7b, 0x9d, 0xd6, 0x2f, 
	0xcd, 0xf1, 0xbd, 0x2b, 0x93, 0xdd, 0x6a, 0xd5, 
	0x62, 0x93, 0x7b, 0x5b, 0x94, 0x23, 0xac, 0xeb, 
	0xb5, 0x25, 0xc5, 0x69, 0x93, 0xdb, 0x5a, 0x93, 
	0x73, 0x19, 0x8c, 0x23, 0x62, 0xd5, 0xd6, 0x33, 
	0x52, 0x51, 0x8c, 0x21, 0xd5, 0xeb, 0x9c, 0x63, 
	0xde, 0xb7, 0xc5, 0x25, 0xa4, 0xa1, 0x9c, 0x5f, 
	0x7b, 0x59, 0x9c, 0x61, 0x73, 0x5b, 0xc5, 0xa9, 
	0xd6, 0x73, 0xad, 0x27, 0x29, 0x07, 0x49, 0xcf, 
	0x52, 0x55, 0xde, 0x31, 0x83, 0x59, 0x8b, 0xe1, 
	0x83, 0xe1, 0xcd, 0xad, 0xb4, 0xa5, 0x41, 0x8b, 
	0x62, 0x53, 0xa4, 0xeb, 0x9c, 0x1d, 0x7b, 0x15, 
	0x29, 0x09, 0x20, 0x85, 0x10, 0x03, 0x93, 0xdf, 
	0xe6, 0xb7, 0xa4, 0x9f, 0xc5, 0xf1, 0xb5, 0x71, 
	0x8b, 0x9d, 0xa4, 0x5f, 0x93, 0x9b, 0x94, 0x1d, 
	0x6b, 0x15, 0x62, 0xd1, 0x41, 0x49, 0x6a, 0x95, 
	0xb5, 0x6b, 0xc5, 0xb1, 0x8b, 0xd9, 0x9c, 0x9f, 
	0xde, 0x77, 0x6a, 0x91, 0xa4, 0x61, 0xb4, 0xa3, 
	0xbd, 0xb1, 0xac, 0x9f, 0xa4, 0xe5, 0x83, 0xdd, 
	0x31, 0x4b, 0x62, 0x91, 
};

Gfx bewer_bomp_ci8_aligner[] = {gsSPEndDisplayList()};
u8 bewer_bomp_ci8[] = {
	0x00, 0x01, 0x02, 0x03, 0x03, 0x04, 0x05, 0x06, 
	0x03, 0x07, 0x08, 0x09, 0x0a, 0x03, 0x0b, 0x0c, 
	0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 
	0x14, 0x15, 0x09, 0x0d, 0x02, 0x0c, 0x03, 0x0d, 
	0x06, 0x09, 0x05, 0x03, 0x06, 0x02, 0x06, 0x16, 
	0x17, 0x18, 0x19, 0x1a, 0x1b, 0x0b, 0x0c, 0x16, 
	0x0b, 0x17, 0x1c, 0x1d, 0x1e, 0x15, 0x1f, 0x20, 
	0x21, 0x22, 0x23, 0x00, 0x24, 0x24, 0x06, 0x06, 
	0x06, 0x03, 0x03, 0x24, 0x02, 0x06, 0x0d, 0x0d, 
	0x0b, 0x06, 0x03, 0x00, 0x25, 0x26, 0x0d, 0x0d, 
	0x27, 0x28, 0x29, 0x2a, 0x16, 0x2b, 0x2c, 0x16, 
	0x18, 0x25, 0x2d, 0x2e, 0x0b, 0x18, 0x0c, 0x03, 
	0x02, 0x02, 0x24, 0x03, 0x0d, 0x2f, 0x2b, 0x0d, 
	0x30, 0x0c, 0x0d, 0x0d, 0x31, 0x32, 0x33, 0x27, 
	0x25, 0x25, 0x34, 0x35, 0x36, 0x37, 0x34, 0x00, 
	0x03, 0x38, 0x39, 0x2e, 0x30, 0x0c, 0x0b, 0x0c, 
	0x03, 0x03, 0x30, 0x0c, 0x0d, 0x0d, 0x3a, 0x0c, 
	0x3b, 0x03, 0x0d, 0x2f, 0x3c, 0x3d, 0x00, 0x3e, 
	0x17, 0x3f, 0x40, 0x00, 0x00, 0x41, 0x42, 0x42, 
	0x42, 0x34, 0x43, 0x44, 0x45, 0x46, 0x47, 0x0c, 
	0x03, 0x03, 0x30, 0x30, 0x0d, 0x02, 0x2b, 0x03, 
	0x2b, 0x03, 0x02, 0x48, 0x07, 0x49, 0x3f, 0x46, 
	0x24, 0x30, 0x4a, 0x35, 0x18, 0x35, 0x0d, 0x34, 
	0x41, 0x34, 0x4b, 0x4c, 0x4d, 0x4e, 0x24, 0x05, 
	0x03, 0x2b, 0x24, 0x03, 0x02, 0x0d, 0x0c, 0x16, 
	0x4f, 0x35, 0x24, 0x00, 0x50, 0x0f, 0x51, 0x04, 
	0x04, 0x52, 0x27, 0x20, 0x53, 0x18, 0x0d, 0x0d, 
	0x03, 0x54, 0x55, 0x56, 0x57, 0x58, 0x0c, 0x46, 
	0x35, 0x59, 0x0c, 0x09, 0x09, 0x02, 0x4f, 0x2b, 
	0x16, 0x46, 0x17, 0x5a, 0x26, 0x5b, 0x04, 0x0f, 
	0x30, 0x17, 0x0d, 0x1d, 0x17, 0x5c, 0x0f, 0x51, 
	0x5d, 0x5e, 0x1d, 0x3d, 0x2e, 0x5f, 0x60, 0x0c, 
	0x0d, 0x0d, 0x0d, 0x0d, 0x02, 0x61, 0x62, 0x63, 
	0x63, 0x64, 0x65, 0x44, 0x30, 0x51, 0x30, 0x04, 
	0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x64, 0x63, 
	0x64, 0x6c, 0x6b, 0x58, 0x6d, 0x2d, 0x05, 0x02, 
	0x0d, 0x00, 0x0d, 0x0d, 0x63, 0x6e, 0x6f, 0x6f, 
	0x6f, 0x70, 0x70, 0x71, 0x62, 0x04, 0x05, 0x30, 
	0x66, 0x0d, 0x66, 0x26, 0x6e, 0x6f, 0x6f, 0x6f, 
	0x6f, 0x70, 0x6e, 0x64, 0x61, 0x1b, 0x40, 0x0b, 
	0x01, 0x0d, 0x41, 0x72, 0x6f, 0x6f, 0x6f, 0x73, 
	0x74, 0x75, 0x6c, 0x6e, 0x76, 0x77, 0x66, 0x78, 
	0x30, 0x02, 0x79, 0x6f, 0x6f, 0x79, 0x74, 0x19, 
	0x6c, 0x7a, 0x6f, 0x70, 0x71, 0x6b, 0x4a, 0x26, 
	0x7b, 0x0b, 0x7c, 0x6f, 0x6f, 0x62, 0x7d, 0x7e, 
	0x7f, 0x7f, 0x7f, 0x80, 0x75, 0x81, 0x65, 0x82, 
	0x04, 0x65, 0x76, 0x65, 0x83, 0x7e, 0x7f, 0x7f, 
	0x7f, 0x84, 0x85, 0x6e, 0x6f, 0x86, 0x61, 0x87, 
	0x2d, 0x2d, 0x6f, 0x6f, 0x74, 0x7d, 0x80, 0x84, 
	0x7e, 0x7f, 0x7f, 0x7f, 0x7f, 0x88, 0x86, 0x66, 
	0x78, 0x89, 0x61, 0x7d, 0x84, 0x84, 0x7e, 0x7f, 
	0x7f, 0x7f, 0x7f, 0x8a, 0x6e, 0x6f, 0x6c, 0x8b, 
	0x0d, 0x72, 0x6f, 0x8c, 0x8d, 0x8e, 0x7d, 0x80, 
	0x84, 0x84, 0x7e, 0x7f, 0x7f, 0x7f, 0x6b, 0x79, 
	0x62, 0x63, 0x8f, 0x7d, 0x80, 0x80, 0x84, 0x84, 
	0x7e, 0x7f, 0x7f, 0x7f, 0x19, 0x6f, 0x86, 0x08, 
	0x2b, 0x76, 0x90, 0x4c, 0x8d, 0x8e, 0x7d, 0x7d, 
	0x80, 0x84, 0x84, 0x91, 0x92, 0x7f, 0x7d, 0x77, 
	0x64, 0x4c, 0x8f, 0x93, 0x94, 0x95, 0x80, 0x80, 
	0x84, 0x84, 0x7e, 0x7f, 0x84, 0x71, 0x6f, 0x08, 
	0x96, 0x6f, 0x72, 0x88, 0x8d, 0x8f, 0x8e, 0x7d, 
	0x7d, 0x8f, 0x97, 0x98, 0x99, 0x9a, 0x9b, 0x74, 
	0x79, 0x9c, 0x9d, 0x9e, 0x9f, 0xa0, 0xa1, 0x80, 
	0x80, 0x80, 0x84, 0x84, 0x7e, 0x6b, 0x6f, 0x08, 
	0x26, 0x76, 0xa2, 0x88, 0xa3, 0x8d, 0x8f, 0x8e, 
	0x7d, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0x4c, 
	0x6b, 0xa6, 0xa5, 0xaa, 0xab, 0xac, 0xad, 0x7d, 
	0x7d, 0x80, 0x80, 0x80, 0x80, 0xae, 0x6f, 0x40, 
	0x09, 0xaf, 0xb0, 0x4c, 0x8a, 0xa3, 0x8d, 0x8f, 
	0x8e, 0xb1, 0xb2, 0xb3, 0xb3, 0xb3, 0xab, 0x4c, 
	0x61, 0xb4, 0x70, 0xb5, 0xb3, 0xb3, 0xb6, 0x8e, 
	0x8e, 0x7d, 0x7d, 0x7d, 0x7d, 0x6b, 0x76, 0x00, 
	0x44, 0x7c, 0x81, 0x74, 0x88, 0x8a, 0x8d, 0x8d, 
	0x8f, 0xa3, 0xb7, 0x6f, 0x6f, 0xb7, 0x7d, 0x74, 
	0x61, 0xb8, 0x86, 0x6f, 0x6f, 0xb9, 0xba, 0x8f, 
	0x8e, 0x8e, 0x8e, 0x8e, 0x8f, 0x77, 0xb0, 0xbb, 
	0x10, 0x0d, 0xb9, 0x65, 0x4c, 0xba, 0x8a, 0xa3, 
	0x8d, 0x8f, 0xba, 0x6b, 0xae, 0x8d, 0xa3, 0xbc, 
	0x04, 0x6b, 0x4c, 0x65, 0x79, 0x4c, 0x8d, 0x8d, 
	0x8f, 0x8f, 0x8f, 0x8d, 0xba, 0x90, 0x6b, 0xbd, 
	0xbe, 0x15, 0x64, 0x71, 0x61, 0x4c, 0xba, 0x8a, 
	0xa3, 0xa3, 0x8d, 0x8d, 0x8d, 0xa3, 0xae, 0x4e, 
	0x30, 0x6b, 0xae, 0x4c, 0xba, 0x8a, 0xa3, 0xa3, 
	0xa3, 0xa3, 0xa3, 0x8a, 0x8c, 0xbf, 0x34, 0xc0, 
	0x03, 0x1e, 0x49, 0xc1, 0x63, 0x61, 0x4c, 0x4c, 
	0x88, 0xba, 0x8a, 0x8a, 0x88, 0xae, 0x30, 0x03, 
	0x30, 0x30, 0x6b, 0x61, 0x4c, 0x4c, 0x88, 0xba, 
	0xba, 0xba, 0x4c, 0x79, 0x8c, 0xc2, 0x03, 0x2b, 
	0x0c, 0x03, 0x96, 0x40, 0x6b, 0x65, 0x62, 0x61, 
	0x74, 0xb8, 0xb8, 0x61, 0x61, 0x26, 0x06, 0x09, 
	0x30, 0xc2, 0x3b, 0x6b, 0x62, 0x61, 0x74, 0xb8, 
	0x74, 0x6b, 0x62, 0x6b, 0x18, 0x68, 0x02, 0x0d, 
	0x0b, 0x0b, 0x0b, 0x96, 0x40, 0x3e, 0x17, 0x6b, 
	0x62, 0x62, 0x6b, 0x60, 0x2b, 0x15, 0x24, 0x02, 
	0xc3, 0xc4, 0xc5, 0x55, 0xc6, 0x6b, 0x62, 0x62, 
	0x6b, 0x61, 0x0d, 0x2b, 0x2b, 0x2b, 0xc7, 0x0b, 
	0x03, 0x0c, 0x0d, 0xc8, 0x2d, 0xc9, 0x17, 0x3a, 
	0x18, 0x16, 0x18, 0x53, 0xca, 0x5a, 0x02, 0xcb, 
	0xcc, 0xcd, 0xc5, 0xce, 0x2b, 0x03, 0x0c, 0x0c, 
	0x03, 0x03, 0x47, 0x0d, 0x36, 0x2b, 0x3c, 0x03, 
	0x1b, 0x57, 0xcf, 0x01, 0x4a, 0x87, 0xc6, 0x16, 
	0x2b, 0x0a, 0x16, 0x0a, 0x35, 0x5a, 0x3b, 0xd0, 
	0x7b, 0xd1, 0xd2, 0x49, 0x00, 0x05, 0x35, 0x0d, 
	0x03, 0x36, 0x16, 0x2b, 0x34, 0x03, 0x2b, 0x35, 
	0xd3, 0xd4, 0xd5, 0xd6, 0xc9, 0xd7, 0xc8, 0x6d, 
	0x18, 0x16, 0x0d, 0x00, 0xd8, 0x22, 0x04, 0x30, 
	0xd9, 0xda, 0x78, 0x1b, 0x34, 0x18, 0x68, 0xdb, 
	0xdc, 0x59, 0x0d, 0x03, 0x2b, 0xdd, 0x39, 0x15, 
	0xde, 0xdf, 0xd2, 0xe0, 0x25, 0x40, 0xc8, 0x34, 
	0xc6, 0xe1, 0xc6, 0x0d, 0x44, 0x44, 0x54, 0x3b, 
	0xe2, 0xe3, 0xe4, 0xe5, 0x1b, 0x16, 0x16, 0xe6, 
	0x68, 0x03, 0x0d, 0x30, 0x0a, 0x25, 0x8b, 0xbe, 
	0x23, 0xcd, 0xcd, 0x5f, 0xd2, 0xc0, 0xe5, 0xcf, 
	0x26, 0xd7, 0xd3, 0x27, 0xe0, 0xe0, 0xe7, 0x03, 
	0xe8, 0xe9, 0x2a, 0x25, 0x25, 0xdb, 0x4f, 0x59, 
	0x2b, 0x16, 0x03, 0x0a, 0x00, 0xe0, 0xc5, 0x46, 
	0x02, 0x06, 0x23, 0x25, 0x0b, 0xea, 0xeb, 0xe0, 
	0x2d, 0x4a, 0xbe, 0xc0, 0x00, 0x25, 0xbe, 0xd7, 
	0x5f, 0xec, 0x16, 0x6d, 0x1b, 0x26, 0x43, 0x59, 
	0x0d, 0x59, 0x0a, 0xc0, 0xed, 0x0d, 0x3e, 0x06, 
	0x09, 0x4e, 0x09, 0x0d, 0x59, 0x18, 0x2c, 0x2f, 
	0x00, 0xee, 0x35, 0x0a, 0x00, 0x66, 0x2b, 0x3d, 
	0x5a, 0x58, 0x16, 0x0c, 0xc6, 0xef, 0xc2, 0x4f, 
	0xdb, 0x52, 0xd3, 0x33, 0x0c, 0x53, 0x24, 0x09, 
	0x0d, 0x0d, 0x02, 0x03, 0x03, 0x16, 0x4f, 0x46, 
	0xc8, 0xf0, 0xce, 0x4f, 0x0d, 0x00, 0x0b, 0xca, 
	0x1b, 0x0c, 0x0c, 0x59, 0xe6, 0x35, 0xf1, 0x4d, 
	0x41, 0x27, 0x87, 0xf2, 0x6d, 0xf3, 0x0c, 0x0d, 
	
};

Gfx bewer_bomp_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 bewer_bomp_ci8_pal_rgba16[] = {
	0x9c, 0xa5, 0x94, 0x61, 0xac, 0xa5, 0xac, 0xe7, 
	0xbd, 0x27, 0xb5, 0x27, 0xac, 0xe5, 0x6b, 0x19, 
	0x5a, 0x53, 0x9c, 0xa3, 0xc5, 0xaf, 0xbd, 0x6b, 
	0xb5, 0x29, 0xa4, 0xa5, 0xcd, 0xed, 0xc5, 0xab, 
	0x41, 0x8d, 0x10, 0x43, 0x39, 0x47, 0x83, 0x15, 
	0xbc, 0xe5, 0x83, 0x5b, 0xb5, 0x2b, 0xc5, 0xad, 
	0xbd, 0x6d, 0x84, 0x23, 0x6b, 0x17, 0x94, 0x1f, 
	0x72, 0xd5, 0x08, 0x01, 0x4a, 0x0f, 0x51, 0xcf, 
	0x31, 0x09, 0x31, 0x49, 0x6a, 0x93, 0x94, 0x5f, 
	0xb4, 0xe7, 0x8b, 0xdf, 0x8b, 0xdd, 0x5a, 0x51, 
	0x49, 0x8b, 0x18, 0x85, 0x52, 0x53, 0xac, 0xe9, 
	0xbd, 0xaf, 0x52, 0x0f, 0x73, 0x59, 0xad, 0x29, 
	0xb4, 0xe5, 0xc5, 0xf5, 0x6a, 0xd9, 0x39, 0x8b, 
	0x94, 0x63, 0xa4, 0xa7, 0xa4, 0xe7, 0x9c, 0x65, 
	0xcd, 0xaf, 0xce, 0x35, 0xb5, 0x2d, 0xac, 0xa3, 
	0xad, 0x2b, 0x5a, 0x95, 0xd6, 0x31, 0xcd, 0xef, 
	0x73, 0x17, 0x94, 0x21, 0x93, 0xe1, 0xb5, 0x6f, 
	0x6a, 0xd7, 0x94, 0x1b, 0xbd, 0x29, 0xbd, 0xad, 
	0xc5, 0xb3, 0x83, 0x9b, 0x49, 0xcd, 0xd6, 0x77, 
	0x94, 0xa5, 0x7b, 0x57, 0xa4, 0xa3, 0xb5, 0x6d, 
	0x4a, 0x11, 0xcd, 0xab, 0xc5, 0xef, 0xce, 0x33, 
	0xe6, 0xf7, 0x8b, 0x9b, 0x28, 0xc7, 0x7b, 0x19, 
	0xde, 0x73, 0xac, 0xa7, 0x83, 0x9d, 0xd5, 0xef, 
	0xde, 0xb5, 0x83, 0x19, 0x20, 0x43, 0x8b, 0xdb, 
	0xd6, 0x35, 0x73, 0x9d, 0x63, 0x19, 0x39, 0xcf, 
	0x3a, 0x11, 0x5a, 0xd7, 0xbd, 0x69, 0xc5, 0x6b, 
	0xbd, 0x6f, 0x41, 0xcf, 0x8b, 0x99, 0x6b, 0x5b, 
	0x4a, 0x55, 0xcd, 0xf3, 0x08, 0x85, 0x00, 0x01, 
	0x00, 0x03, 0x19, 0x09, 0x21, 0x09, 0x4a, 0x95, 
	0x84, 0x21, 0x73, 0xdf, 0x00, 0x43, 0x42, 0x53, 
	0xbd, 0x25, 0x52, 0x95, 0x29, 0x8d, 0x93, 0xdd, 
	0x31, 0x8d, 0xd6, 0xb5, 0xef, 0x7b, 0xf7, 0xbd, 
	0xde, 0xf7, 0x10, 0xc7, 0xb5, 0x25, 0xc6, 0x33, 
	0xe7, 0x39, 0x84, 0x63, 0x21, 0x0b, 0x6a, 0xd5, 
	0x9c, 0xe7, 0x10, 0x87, 0xad, 0x6b, 0x52, 0x51, 
	0x4a, 0x53, 0xbd, 0xef, 0xce, 0x73, 0xc6, 0x31, 
	0x08, 0x45, 0xc6, 0x39, 0xbd, 0xfb, 0xad, 0x73, 
	0x94, 0xb7, 0xbd, 0xf7, 0x52, 0x11, 0x18, 0xe1, 
	0x39, 0xef, 0x08, 0x71, 0x73, 0xb3, 0xe7, 0x3b, 
	0xad, 0x6d, 0x39, 0xe1, 0x00, 0x29, 0x42, 0x35, 
	0x21, 0x2f, 0xbd, 0xf3, 0x31, 0xcf, 0xb5, 0xad, 
	0x73, 0xa1, 0x00, 0x0f, 0x8c, 0x65, 0x21, 0x21, 
	0x00, 0x1b, 0xb5, 0xb1, 0x10, 0x99, 0x94, 0xa7, 
	0x08, 0x5d, 0x63, 0x25, 0x7b, 0xdf, 0x10, 0x85, 
	0x29, 0x4b, 0x63, 0x1b, 0x00, 0x05, 0x00, 0x09, 
	0x73, 0x9f, 0x00, 0x07, 0x63, 0x1d, 0x18, 0xc7, 
	0x8c, 0x63, 0x08, 0x43, 0xa5, 0x29, 0x62, 0x53, 
	0xc5, 0x69, 0x29, 0x09, 0x62, 0x95, 0x42, 0x13, 
	0x7b, 0x5b, 0x42, 0x11, 0x9c, 0x63, 0xa4, 0x9f, 
	0xb4, 0xa5, 0x9c, 0x61, 0xc5, 0xf1, 0xb5, 0x71, 
	0x8b, 0x9d, 0x7b, 0x17, 0x94, 0x65, 0x9c, 0x1d, 
	0xa4, 0x5f, 0xa4, 0xa1, 0x73, 0x19, 0x7b, 0x59, 
	0x9c, 0x5f, 0x93, 0x9b, 0x94, 0x1d, 0x62, 0x93, 
	0x6b, 0x15, 0x62, 0xd1, 0x41, 0x49, 0x6a, 0x95, 
	0x8b, 0xe1, 0x93, 0xdb, 0x83, 0x59, 0xb5, 0x6b, 
	0xb4, 0xe9, 0xc5, 0xb1, 0x8b, 0xd9, 0x9c, 0x9f, 
	0x62, 0xd5, 0xde, 0x77, 0x6a, 0x91, 0xa4, 0x61, 
	0xb4, 0xa3, 0x5a, 0x93, 0xbd, 0xb1, 0x93, 0xdf, 
	0xac, 0x9f, 0x7b, 0x15, 0xa4, 0xe5, 0x83, 0xdd, 
	0x73, 0x5b, 0x31, 0x4b, 0x7b, 0x9d, 0x62, 0x91, 
	0x52, 0x55, 0x41, 0x8b, 0xcd, 0xf1, 0xbd, 0x2b, 
	
};

Vtx bewer_Bewer_mesh_layer_1_vtx_cull[8] = {
	{{{0, -400, 400},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{0, 400, 400},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{0, 400, -400},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{0, -400, -400},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{2062, -400, 400},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{2062, 400, 400},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{2062, 400, -400},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{2062, -400, -400},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx bewer_Bewer_mesh_layer_1_vtx_0[16] = {
	{{{0, -200, -200},0, {-2136, 1012},{0x0, 0xA6, 0xA6, 0xFF}}},
	{{{0, 200, -200},0, {-2136, -12},{0x0, 0x5A, 0xA6, 0xFF}}},
	{{{2000, 200, -200},0, {2984, -12},{0x31, 0x53, 0xAD, 0xFF}}},
	{{{2000, -200, -200},0, {2984, 1012},{0x31, 0xAD, 0xAD, 0xFF}}},
	{{{2000, -200, 200},0, {2984, 1012},{0x31, 0xAD, 0x53, 0xFF}}},
	{{{2000, 200, 200},0, {2984, -12},{0x31, 0x53, 0x53, 0xFF}}},
	{{{0, 200, 200},0, {-2136, -12},{0x0, 0x5A, 0x5A, 0xFF}}},
	{{{0, -200, 200},0, {-2136, 1012},{0x0, 0xA6, 0x5A, 0xFF}}},
	{{{0, -200, -200},0, {-2136, -28},{0x0, 0xA6, 0xA6, 0xFF}}},
	{{{2000, -200, -200},0, {2984, -28},{0x31, 0xAD, 0xAD, 0xFF}}},
	{{{2000, -200, 200},0, {2984, 996},{0x31, 0xAD, 0x53, 0xFF}}},
	{{{0, -200, 200},0, {-2136, 996},{0x0, 0xA6, 0x5A, 0xFF}}},
	{{{2000, 200, -200},0, {2984, -28},{0x31, 0x53, 0xAD, 0xFF}}},
	{{{0, 200, -200},0, {-2136, -28},{0x0, 0x5A, 0xA6, 0xFF}}},
	{{{0, 200, 200},0, {-2136, 996},{0x0, 0x5A, 0x5A, 0xFF}}},
	{{{2000, 200, 200},0, {2984, 996},{0x31, 0x53, 0x53, 0xFF}}},
};

Gfx bewer_Bewer_mesh_layer_1_tri_0[] = {
	gsSPVertex(bewer_Bewer_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSPEndDisplayList(),
};

Vtx bewer_Bewer_mesh_layer_1_vtx_1[8] = {
	{{{2062, 140, -140},0, {851, 144},{0x73, 0x27, 0xD9, 0xFF}}},
	{{{2000, -200, -200},0, {1005, 1013},{0x31, 0xAD, 0xAD, 0xFF}}},
	{{{2000, 200, -200},0, {1005, -10},{0x31, 0x53, 0xAD, 0xFF}}},
	{{{2062, -140, -140},0, {851, 858},{0x73, 0xD9, 0xD9, 0xFF}}},
	{{{2062, 140, 140},0, {137, 144},{0x73, 0x27, 0x27, 0xFF}}},
	{{{2000, 200, 200},0, {-17, -10},{0x31, 0x53, 0x53, 0xFF}}},
	{{{2062, -140, 140},0, {137, 858},{0x73, 0xD9, 0x27, 0xFF}}},
	{{{2000, -200, 200},0, {-17, 1013},{0x31, 0xAD, 0x53, 0xFF}}},
};

Gfx bewer_Bewer_mesh_layer_1_tri_1[] = {
	gsSPVertex(bewer_Bewer_mesh_layer_1_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 0, 4, 0, 4, 0, 2, 0),
	gsSP2Triangles(4, 2, 5, 0, 6, 4, 5, 0),
	gsSP2Triangles(6, 5, 7, 0, 3, 6, 7, 0),
	gsSP2Triangles(3, 7, 1, 0, 3, 4, 6, 0),
	gsSPEndDisplayList(),
};

Vtx bewer_Bewer_mesh_layer_1_vtx_2[84] = {
	{{{1579, 200, 154},0, {418, -12},{0xB2, 0x39, 0x53, 0xFF}}},
	{{{1648, 400, 82},0, {604, -524},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1619, 200, -14},0, {849, -12},{0xE0, 0x39, 0x93, 0xFF}}},
	{{{1127, 200, -147},0, {748, -12},{0xA9, 0x39, 0xB6, 0xFF}}},
	{{{1203, 400, -82},0, {943, -524},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1297, 200, -115},0, {1184, -12},{0x6B, 0x39, 0xDA, 0xFF}}},
	{{{705, 200, 104},0, {-330, -12},{0x62, 0x39, 0x39, 0xFF}}},
	{{{619, 400, 54},0, {-552, -524},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{532, 200, 104},0, {-774, -12},{0x9E, 0x39, 0x39, 0xFF}}},
	{{{1579, -146, 200},0, {300, 874},{0xB2, 0xAD, 0x39, 0xFF}}},
	{{{1648, -73, 400},0, {-212, 689},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{1619, 22, 200},0, {300, 443},{0xE0, 0x6D, 0x39, 0xFF}}},
	{{{1127, 155, 200},0, {748, 996},{0xA9, 0x4A, 0x39, 0xFF}}},
	{{{1203, 90, 400},0, {943, 1508},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{1297, 123, 200},0, {1184, 996},{0x6B, 0x26, 0x39, 0xFF}}},
	{{{705, -96, 200},0, {-330, 996},{0x62, 0xC7, 0x39, 0xFF}}},
	{{{619, -46, 400},0, {-552, 1508},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{532, -96, 200},0, {-774, 996},{0x9E, 0xC7, 0x39, 0xFF}}},
	{{{1579, 126, -200},0, {1324, 177},{0xB2, 0x53, 0xC7, 0xFF}}},
	{{{1648, 54, -400},0, {1836, 363},{0x0, 0x0, 0x81, 0xFF}}},
	{{{1619, -42, -200},0, {1324, 608},{0xE0, 0x93, 0xC7, 0xFF}}},
	{{{1127, -175, -200},0, {748, -28},{0xA9, 0xB6, 0xC7, 0xFF}}},
	{{{1203, -110, -400},0, {943, -540},{0x0, 0x0, 0x81, 0xFF}}},
	{{{1297, -143, -200},0, {1184, -28},{0x6B, 0xDA, 0xC7, 0xFF}}},
	{{{705, 76, -200},0, {-330, -28},{0x62, 0x39, 0xC7, 0xFF}}},
	{{{619, 26, -400},0, {-552, -540},{0x0, 0x0, 0x81, 0xFF}}},
	{{{532, 76, -200},0, {-774, -28},{0x9E, 0x39, 0xC7, 0xFF}}},
	{{{1579, -200, -105},0, {1082, 1012},{0xB2, 0xC7, 0xAD, 0xFF}}},
	{{{1648, -400, -33},0, {896, 1524},{0x0, 0x81, 0x0, 0xFF}}},
	{{{1619, -200, 63},0, {650, 1012},{0xE0, 0xC7, 0x6D, 0xFF}}},
	{{{1127, -200, 196},0, {748, 1012},{0xA9, 0xC7, 0x4A, 0xFF}}},
	{{{1203, -400, 131},0, {943, 1524},{0x0, 0x81, 0x0, 0xFF}}},
	{{{1297, -200, 164},0, {1184, 1012},{0x6B, 0xC7, 0x26, 0xFF}}},
	{{{705, -200, -55},0, {-330, 1012},{0x62, 0xC7, 0xC7, 0xFF}}},
	{{{619, -400, -5},0, {-552, 1524},{0x0, 0x81, 0x0, 0xFF}}},
	{{{532, -200, -55},0, {-774, 1012},{0x9E, 0xC7, 0xC7, 0xFF}}},
	{{{1297, 200, -115},0, {1107, -12},{0x6B, 0x39, 0xDA, 0xFF}}},
	{{{1203, 400, -82},0, {1021, -524},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1184, 200, 17},0, {770, -12},{0xEC, 0x39, 0x70, 0xFF}}},
	{{{1127, 200, -147},0, {1188, -12},{0xA9, 0x39, 0xB6, 0xFF}}},
	{{{1619, 200, -14},0, {2009, -12},{0xE0, 0x39, 0x93, 0xFF}}},
	{{{1648, 400, 82},0, {2082, -524},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1745, 200, 105},0, {2331, -12},{0x6F, 0x39, 0x1A, 0xFF}}},
	{{{1579, 200, 154},0, {1906, -12},{0xB2, 0x39, 0x53, 0xFF}}},
	{{{619, 200, -46},0, {930, -12},{0x0, 0x39, 0x8E, 0xFF}}},
	{{{619, 400, 54},0, {674, -524},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{705, 200, 104},0, {546, -12},{0x62, 0x39, 0x39, 0xFF}}},
	{{{532, 200, 104},0, {546, -12},{0x9E, 0x39, 0x39, 0xFF}}},
	{{{1297, 123, 200},0, {300, 185},{0x6B, 0x26, 0x39, 0xFF}}},
	{{{1203, 90, 400},0, {-212, 271},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{1184, -9, 200},0, {300, 522},{0xEC, 0x90, 0x39, 0xFF}}},
	{{{1127, 155, 200},0, {300, 104},{0xA9, 0x4A, 0x39, 0xFF}}},
	{{{1619, 22, 200},0, {2009, 996},{0xE0, 0x6D, 0x39, 0xFF}}},
	{{{1648, -73, 400},0, {2082, 1508},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{1745, -97, 200},0, {2331, 996},{0x6F, 0xE6, 0x39, 0xFF}}},
	{{{1579, -146, 200},0, {1906, 996},{0xB2, 0xAD, 0x39, 0xFF}}},
	{{{619, 54, 200},0, {300, 362},{0x0, 0x72, 0x39, 0xFF}}},
	{{{619, -46, 400},0, {-212, 618},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{705, -96, 200},0, {300, 746},{0x62, 0xC7, 0x39, 0xFF}}},
	{{{532, -96, 200},0, {300, 746},{0x9E, 0xC7, 0x39, 0xFF}}},
	{{{1297, -143, -200},0, {1324, 866},{0x6B, 0xDA, 0xC7, 0xFF}}},
	{{{1203, -110, -400},0, {1836, 781},{0x0, 0x0, 0x81, 0xFF}}},
	{{{1184, -11, -200},0, {1324, 529},{0xEC, 0x70, 0xC7, 0xFF}}},
	{{{1127, -175, -200},0, {1324, 947},{0xA9, 0xB6, 0xC7, 0xFF}}},
	{{{1619, -42, -200},0, {2009, -28},{0xE0, 0x93, 0xC7, 0xFF}}},
	{{{1648, 54, -400},0, {2082, -540},{0x0, 0x0, 0x81, 0xFF}}},
	{{{1745, 77, -200},0, {2331, -28},{0x6F, 0x1A, 0xC7, 0xFF}}},
	{{{1579, 126, -200},0, {1906, -28},{0xB2, 0x53, 0xC7, 0xFF}}},
	{{{619, -74, -200},0, {1324, 689},{0x0, 0x8E, 0xC7, 0xFF}}},
	{{{619, 26, -400},0, {1836, 433},{0x0, 0x0, 0x81, 0xFF}}},
	{{{705, 76, -200},0, {1324, 305},{0x62, 0x39, 0xC7, 0xFF}}},
	{{{532, 76, -200},0, {1324, 305},{0x9E, 0x39, 0xC7, 0xFF}}},
	{{{1297, -200, 164},0, {393, 1012},{0x6B, 0xC7, 0x26, 0xFF}}},
	{{{1203, -400, 131},0, {478, 1524},{0x0, 0x81, 0x0, 0xFF}}},
	{{{1184, -200, 32},0, {730, 1012},{0xEC, 0xC7, 0x90, 0xFF}}},
	{{{1127, -200, 196},0, {311, 1012},{0xA9, 0xC7, 0x4A, 0xFF}}},
	{{{1619, -200, 63},0, {2009, 1012},{0xE0, 0xC7, 0x6D, 0xFF}}},
	{{{1648, -400, -33},0, {2082, 1524},{0x0, 0x81, 0x0, 0xFF}}},
	{{{1745, -200, -56},0, {2331, 1012},{0x6F, 0xC7, 0xE6, 0xFF}}},
	{{{1579, -200, -105},0, {1906, 1012},{0xB2, 0xC7, 0xAD, 0xFF}}},
	{{{619, -200, 95},0, {569, 1012},{0x0, 0xC7, 0x72, 0xFF}}},
	{{{619, -400, -5},0, {825, 1524},{0x0, 0x81, 0x0, 0xFF}}},
	{{{705, -200, -55},0, {953, 1012},{0x62, 0xC7, 0xC7, 0xFF}}},
	{{{532, -200, -55},0, {953, 1012},{0x9E, 0xC7, 0xC7, 0xFF}}},
};

Gfx bewer_Bewer_mesh_layer_1_tri_2[] = {
	gsSPVertex(bewer_Bewer_mesh_layer_1_vtx_2 + 0, 30, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
	gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
	gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
	gsSPVertex(bewer_Bewer_mesh_layer_1_vtx_2 + 30, 30, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
	gsSP2Triangles(10, 11, 12, 0, 12, 11, 13, 0),
	gsSP2Triangles(14, 15, 16, 0, 17, 15, 14, 0),
	gsSP2Triangles(18, 19, 20, 0, 20, 19, 21, 0),
	gsSP2Triangles(22, 23, 24, 0, 24, 23, 25, 0),
	gsSP2Triangles(26, 27, 28, 0, 29, 27, 26, 0),
	gsSPVertex(bewer_Bewer_mesh_layer_1_vtx_2 + 60, 24, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 11, 9, 8, 0),
	gsSP2Triangles(12, 13, 14, 0, 14, 13, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 18, 17, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 23, 21, 20, 0),
	gsSPEndDisplayList(),
};


Gfx mat_bewer_bomp_side[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, TEXEL0, 0, SHADE, 0, 0, 0, 0, 1),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, bewer_bomp_side_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 189),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, bewer_bomp_side_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(bewer_bomp_side_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_bewer_bomp_side[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_bewer_bomp_face[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, bewer_bomp_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 243),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, bewer_bomp_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(bewer_bomp_face_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_bewer_bomp_face[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_bewer_spike[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(bewer_spike_lights),
	gsSPEndDisplayList(),
};

Gfx bewer_Bewer_mesh_layer_1[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(bewer_Bewer_mesh_layer_1_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_bewer_bomp_side),
	gsSPDisplayList(bewer_Bewer_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_bewer_bomp_side),
	gsSPDisplayList(mat_bewer_bomp_face),
	gsSPDisplayList(bewer_Bewer_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_bewer_bomp_face),
	gsSPDisplayList(mat_bewer_spike),
	gsSPDisplayList(bewer_Bewer_mesh_layer_1_tri_2),
	gsSPEndDisplayList(),
};

Gfx bewer_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
