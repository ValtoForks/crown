static const uint8_t fs_clear4_glsl[290] =
{
	0x46, 0x53, 0x48, 0x05, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x62, 0x67, 0x66, 0x78, 0x5f, // FSH........bgfx_
	0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x02, 0x08, 0x00, 0x00, 0x08, // clear_color.....
	0x00, 0xfc, 0x00, 0x00, 0x00, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, // .....uniform vec
	0x34, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, // 4 bgfx_clear_col
	0x6f, 0x72, 0x5b, 0x38, 0x5d, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, // or[8];.void main
	0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, //  ().{.  gl_FragD
	0x61, 0x74, 0x61, 0x5b, 0x30, 0x5d, 0x20, 0x3d, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, // ata[0] = bgfx_cl
	0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5b, 0x30, 0x5d, 0x3b, 0x0a, 0x20, 0x20, // ear_color[0];.  
	0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5b, 0x31, 0x5d, 0x20, 0x3d, // gl_FragData[1] =
	0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, //  bgfx_clear_colo
	0x72, 0x5b, 0x31, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, // r[1];.  gl_FragD
	0x61, 0x74, 0x61, 0x5b, 0x32, 0x5d, 0x20, 0x3d, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, // ata[2] = bgfx_cl
	0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5b, 0x32, 0x5d, 0x3b, 0x0a, 0x20, 0x20, // ear_color[2];.  
	0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5b, 0x33, 0x5d, 0x20, 0x3d, // gl_FragData[3] =
	0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, //  bgfx_clear_colo
	0x72, 0x5b, 0x33, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, // r[3];.  gl_FragD
	0x61, 0x74, 0x61, 0x5b, 0x34, 0x5d, 0x20, 0x3d, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, // ata[4] = bgfx_cl
	0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5b, 0x34, 0x5d, 0x3b, 0x0a, 0x7d, 0x0a, // ear_color[4];.}.
	0x0a, 0x00,                                                                                     // ..
};
static const uint8_t fs_clear4_spv[1153] =
{
	0x46, 0x53, 0x48, 0x05, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x62, 0x67, 0x66, 0x78, 0x5f, // FSH........bgfx_
	0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x12, 0x05, 0x00, 0x00, 0x05, // clear_color.....
	0x00, 0x58, 0x04, 0x00, 0x00, 0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x06, 0x00, 0x08, // .X.....#........
	0x00, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, // .r..............
	0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, // .........GLSL.st
	0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, // d.450...........
	0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x0a, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, // ................
	0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x49, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, // .main....I...K..
	0x00, 0x4d, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x00, 0x00, 0x51, 0x00, 0x00, 0x00, 0x10, 0x00, 0x03, // .M...O...Q......
	0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, // ................
	0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, // .............mai
	0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x24, 0x00, 0x00, 0x00, 0x24, 0x47, 0x6c, // n........$...$Gl
	0x6f, 0x62, 0x61, 0x6c, 0x00, 0x06, 0x00, 0x08, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // obal.....$......
	0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, // .bgfx_clear_colo
	0x72, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // r........&......
	0x00, 0x05, 0x00, 0x06, 0x00, 0x49, 0x00, 0x00, 0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, // .....I...bgfx_Fr
	0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0x4b, 0x00, 0x00, // agData0......K..
	0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x31, 0x00, // .bgfx_FragData1.
	0x00, 0x05, 0x00, 0x06, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, // .....M...bgfx_Fr
	0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x32, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0x4f, 0x00, 0x00, // agData2......O..
	0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x33, 0x00, // .bgfx_FragData3.
	0x00, 0x05, 0x00, 0x06, 0x00, 0x51, 0x00, 0x00, 0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, // .....Q...bgfx_Fr
	0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x34, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x23, 0x00, 0x00, // agData4..G...#..
	0x00, 0x06, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x24, 0x00, 0x00, // .........H...$..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x03, // .....#.......G..
	0x00, 0x24, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x26, 0x00, 0x00, // .$.......G...&..
	0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x49, 0x00, 0x00, // .".......G...I..
	0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x4b, 0x00, 0x00, // .........G...K..
	0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x4d, 0x00, 0x00, // .........G...M..
	0x00, 0x1e, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x4f, 0x00, 0x00, // .........G...O..
	0x00, 0x1e, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x51, 0x00, 0x00, // .........G...Q..
	0x00, 0x1e, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, // ................
	0x00, 0x21, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, // .!..............
	0x00, 0x06, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, // ..... ..........
	0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x21, 0x00, 0x00, // .............!..
	0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x21, 0x00, 0x00, // . .......+...!..
	0x00, 0x22, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x04, 0x00, 0x23, 0x00, 0x00, // ."...........#..
	0x00, 0x08, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x03, 0x00, 0x24, 0x00, 0x00, // .....".......$..
	0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x25, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // .#... ...%......
	0x00, 0x24, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x25, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, // .$...;...%...&..
	0x00, 0x02, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x27, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, // .........'... ..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x27, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, // .....+...'...(..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x29, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // ..... ...)......
	0x00, 0x08, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x27, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, // .....+...'...,..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x27, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, // .....+...'.../..
	0x00, 0x02, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x27, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, // .....+...'...2..
	0x00, 0x03, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x27, 0x00, 0x00, 0x00, 0x35, 0x00, 0x00, // .....+...'...5..
	0x00, 0x04, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x48, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // ..... ...H......
	0x00, 0x08, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x48, 0x00, 0x00, 0x00, 0x49, 0x00, 0x00, // .....;...H...I..
	0x00, 0x03, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x48, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, // .....;...H...K..
	0x00, 0x03, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x48, 0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, // .....;...H...M..
	0x00, 0x03, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x48, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x00, // .....;...H...O..
	0x00, 0x03, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x48, 0x00, 0x00, 0x00, 0x51, 0x00, 0x00, // .....;...H...Q..
	0x00, 0x03, 0x00, 0x00, 0x00, 0x36, 0x00, 0x05, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, // .....6..........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x05, 0x00, 0x00, // ................
	0x00, 0x41, 0x00, 0x06, 0x00, 0x29, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, // .A...)...h...&..
	0x00, 0x28, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, // .(...(...=......
	0x00, 0x69, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00, 0x29, 0x00, 0x00, // .i...h...A...)..
	0x00, 0x6a, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, // .j...&...(...,..
	0x00, 0x3d, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x6b, 0x00, 0x00, 0x00, 0x6a, 0x00, 0x00, // .=.......k...j..
	0x00, 0x41, 0x00, 0x06, 0x00, 0x29, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, // .A...)...l...&..
	0x00, 0x28, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, // .(.../...=......
	0x00, 0x6d, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00, 0x29, 0x00, 0x00, // .m...l...A...)..
	0x00, 0x6e, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, // .n...&...(...2..
	0x00, 0x3d, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x6f, 0x00, 0x00, 0x00, 0x6e, 0x00, 0x00, // .=.......o...n..
	0x00, 0x41, 0x00, 0x06, 0x00, 0x29, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, // .A...)...p...&..
	0x00, 0x28, 0x00, 0x00, 0x00, 0x35, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, // .(...5...=......
	0x00, 0x71, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x49, 0x00, 0x00, // .q...p...>...I..
	0x00, 0x69, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x6b, 0x00, 0x00, // .i...>...K...k..
	0x00, 0x3e, 0x00, 0x03, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x6d, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, // .>...M...m...>..
	0x00, 0x4f, 0x00, 0x00, 0x00, 0x6f, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x51, 0x00, 0x00, // .O...o...>...Q..
	0x00, 0x71, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00, 0x00, 0x50, // .q.......8.....P
	0x00,                                                                                           // .
};
static const uint8_t fs_clear4_dx9[234] =
{
	0x46, 0x53, 0x48, 0x05, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x62, 0x67, 0x66, 0x78, 0x5f, // FSH........bgfx_
	0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x12, 0x08, 0x00, 0x00, 0x04, // clear_color.....
	0x00, 0xc4, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xfe, 0xff, 0x22, 0x00, 0x43, 0x54, 0x41, // ...........".CTA
	0x42, 0x1c, 0x00, 0x00, 0x00, 0x5b, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x01, 0x00, 0x00, // B....[..........
	0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, // .........T...0..
	0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .........D......
	0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, // .bgfx_clear_colo
	0x72, 0x00, 0xab, 0xab, 0xab, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, // r...............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, // .....ps_3_0.Micr
	0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, // osoft (R) HLSL S
	0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x31, // hader Compiler 1
	0x30, 0x2e, 0x31, 0x00, 0xab, 0x01, 0x00, 0x00, 0x02, 0x00, 0x08, 0x0f, 0x80, 0x00, 0x00, 0xe4, // 0.1.............
	0xa0, 0x01, 0x00, 0x00, 0x02, 0x01, 0x08, 0x0f, 0x80, 0x01, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x00, // ................
	0x02, 0x02, 0x08, 0x0f, 0x80, 0x02, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x02, 0x03, 0x08, 0x0f, // ................
	0x80, 0x03, 0x00, 0xe4, 0xa0, 0xff, 0xff, 0x00, 0x00, 0x00,                                     // ..........
};
static const uint8_t fs_clear4_dx11[501] =
{
	0x46, 0x53, 0x48, 0x05, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x62, 0x67, 0x66, 0x78, 0x5f, // FSH........bgfx_
	0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x12, 0x08, 0x00, 0x00, 0x08, // clear_color.....
	0x00, 0xcc, 0x01, 0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 0x0e, 0x7a, 0x23, 0x41, 0x2a, 0x54, 0xbd, // .....DXBC.z#A*T.
	0xa3, 0x8b, 0x1e, 0xbd, 0x2e, 0x91, 0x6f, 0x8b, 0x29, 0x01, 0x00, 0x00, 0x00, 0xcc, 0x01, 0x00, // ......o.).......
	0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0xf4, 0x00, 0x00, // .....,...`......
	0x00, 0x49, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, // .ISGN,..........
	0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // . ..............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, // .........SV_POSI
	0x54, 0x49, 0x4f, 0x4e, 0x00, 0x4f, 0x53, 0x47, 0x4e, 0x8c, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, // TION.OSGN.......
	0x00, 0x08, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, // ................
	0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x0f, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, // ................
	0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // ................
	0x00, 0x0f, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, // .............SV_
	0x54, 0x41, 0x52, 0x47, 0x45, 0x54, 0x00, 0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0xd0, 0x00, 0x00, // TARGET...SHDR...
	0x00, 0x40, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, // .@...4...Y...F. 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, // .........e.... .
	0x00, 0x00, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, // .....e.... .....
	0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, // .e.... ......e..
	0x03, 0xf2, 0x20, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, // .. ......e.... .
	0x00, 0x04, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x06, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, // .....6.... .....
	0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, // .F. .........6..
	0x06, 0xf2, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, // .. ......F. ....
	0x00, 0x01, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x06, 0xf2, 0x20, 0x10, 0x00, 0x02, 0x00, 0x00, // .....6.... .....
	0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, // .F. .........6..
	0x06, 0xf2, 0x20, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, // .. ......F. ....
	0x00, 0x03, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x06, 0xf2, 0x20, 0x10, 0x00, 0x04, 0x00, 0x00, // .....6.... .....
	0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, // .F. .........>..
	0x01, 0x00, 0x00, 0x80, 0x00,                                                                   // .....
};
static const uint8_t fs_clear4_mtl[824] =
{
	0x46, 0x53, 0x48, 0x05, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x62, 0x67, 0x66, 0x78, 0x5f, // FSH........bgfx_
	0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x02, 0x08, 0x00, 0x00, 0x08, // clear_color.....
	0x00, 0x12, 0x03, 0x00, 0x00, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, // .....using names
	0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, // pace metal;.stru
	0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, // ct xlatMtlShader
	0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, // Input {.};.struc
	0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, // t xlatMtlShaderO
	0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, // utput {.  float4
	0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x30, 0x20, 0x5b, //  gl_FragData_0 [
	0x5b, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x66, // [color(0)]];.  f
	0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, // loat4 gl_FragDat
	0x61, 0x5f, 0x31, 0x20, 0x5b, 0x5b, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x28, 0x31, 0x29, 0x5d, 0x5d, // a_1 [[color(1)]]
	0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, // ;.  float4 gl_Fr
	0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x32, 0x20, 0x5b, 0x5b, 0x63, 0x6f, 0x6c, 0x6f, 0x72, // agData_2 [[color
	0x28, 0x32, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, // (2)]];.  float4 
	0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x33, 0x20, 0x5b, 0x5b, // gl_FragData_3 [[
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x28, 0x33, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, // color(3)]];.  fl
	0x6f, 0x61, 0x74, 0x34, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, // oat4 gl_FragData
	0x5f, 0x34, 0x20, 0x5b, 0x5b, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x28, 0x34, 0x29, 0x5d, 0x5d, 0x3b, // _4 [[color(4)]];
	0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, // .};.struct xlatM
	0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, // tlShaderUniform 
	0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, // {.  float4 bgfx_
	0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5b, 0x38, 0x5d, 0x3b, 0x0a, // clear_color[8];.
	0x7d, 0x3b, 0x0a, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, // };.fragment xlat
	0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, // MtlShaderOutput 
	0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x78, 0x6c, 0x61, // xlatMtlMain (xla
	0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, // tMtlShaderInput 
	0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, // _mtl_i [[stage_i
	0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x78, 0x6c, // n]], constant xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, // atMtlShaderUnifo
	0x72, 0x6d, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, // rm& _mtl_u [[buf
	0x66, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x78, 0x6c, // fer(0)]]).{.  xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, // atMtlShaderOutpu
	0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, // t _mtl_o;.  _mtl
	0x5f, 0x6f, 0x2e, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x30, // _o.gl_FragData_0
	0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x63, //  = _mtl_u.bgfx_c
	0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5b, 0x30, 0x5d, 0x3b, 0x0a, 0x20, // lear_color[0];. 
	0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, //  _mtl_o.gl_FragD
	0x61, 0x74, 0x61, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x62, // ata_1 = _mtl_u.b
	0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5b, // gfx_clear_color[
	0x31, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x67, 0x6c, 0x5f, // 1];.  _mtl_o.gl_
	0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, // FragData_2 = _mt
	0x6c, 0x5f, 0x75, 0x2e, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, // l_u.bgfx_clear_c
	0x6f, 0x6c, 0x6f, 0x72, 0x5b, 0x32, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, // olor[2];.  _mtl_
	0x6f, 0x2e, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x33, 0x20, // o.gl_FragData_3 
	0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x63, 0x6c, // = _mtl_u.bgfx_cl
	0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5b, 0x33, 0x5d, 0x3b, 0x0a, 0x20, 0x20, // ear_color[3];.  
	0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, // _mtl_o.gl_FragDa
	0x74, 0x61, 0x5f, 0x34, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x62, 0x67, // ta_4 = _mtl_u.bg
	0x66, 0x78, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5b, 0x34, // fx_clear_color[4
	0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x5f, 0x6d, 0x74, 0x6c, // ];.  return _mtl
	0x5f, 0x6f, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                                 // _o;.}...
};
extern const uint8_t* fs_clear4_pssl;
extern const uint32_t fs_clear4_pssl_size;
