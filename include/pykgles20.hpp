#ifndef _PYKGLES20_
#define _PYKGLES20_
#include <stdexcept>
#include <string>
#include <memory>
#include <map>
#include <array>
#include <iostream>
#include <KHR/khrplatform.h>

namespace pyk {
namespace gles20 {

namespace types {

typedef khronos_float_t GLclampf;
typedef khronos_int8_t GLbyte;
typedef khronos_int32_t GLfixed;
typedef unsigned short GLushort;
typedef void GLvoid;
typedef short GLshort;
typedef struct __GLsync *GLsync;
typedef khronos_int64_t GLint64;
typedef khronos_uint64_t GLuint64;
typedef unsigned int GLuint;
typedef char GLchar;
typedef int GLsizei;
typedef khronos_float_t GLfloat;
typedef int GLint;
typedef unsigned char GLboolean;
typedef unsigned int GLenum;
typedef khronos_ssize_t GLsizeiptr;
typedef unsigned int GLbitfield;
typedef khronos_uint8_t GLubyte;
typedef khronos_intptr_t GLintptr;

} // namespace types

namespace enums {

enum {
    GL_FALSE = 0,
    GL_NONE = 0,
    GL_NO_ERROR = 0,
    GL_ZERO = 0,
    GL_POINTS = 0x0000,
    GL_DEPTH_BUFFER_BIT = 0x00000100,
    GL_STENCIL_BUFFER_BIT = 0x00000400,
    GL_COLOR_BUFFER_BIT = 0x00004000,
    GL_LINES = 0x0001,
    GL_LINE_LOOP = 0x0002,
    GL_LINE_STRIP = 0x0003,
    GL_TRIANGLES = 0x0004,
    GL_TRIANGLE_STRIP = 0x0005,
    GL_TRIANGLE_FAN = 0x0006,
    GL_NEVER = 0x0200,
    GL_LESS = 0x0201,
    GL_EQUAL = 0x0202,
    GL_LEQUAL = 0x0203,
    GL_GREATER = 0x0204,
    GL_NOTEQUAL = 0x0205,
    GL_GEQUAL = 0x0206,
    GL_ALWAYS = 0x0207,
    GL_SRC_COLOR = 0x0300,
    GL_ONE_MINUS_SRC_COLOR = 0x0301,
    GL_SRC_ALPHA = 0x0302,
    GL_ONE_MINUS_SRC_ALPHA = 0x0303,
    GL_DST_ALPHA = 0x0304,
    GL_ONE_MINUS_DST_ALPHA = 0x0305,
    GL_DST_COLOR = 0x0306,
    GL_ONE_MINUS_DST_COLOR = 0x0307,
    GL_SRC_ALPHA_SATURATE = 0x0308,
    GL_FRONT = 0x0404,
    GL_BACK = 0x0405,
    GL_FRONT_AND_BACK = 0x0408,
    GL_INVALID_ENUM = 0x0500,
    GL_INVALID_VALUE = 0x0501,
    GL_INVALID_OPERATION = 0x0502,
    GL_OUT_OF_MEMORY = 0x0505,
    GL_INVALID_FRAMEBUFFER_OPERATION = 0x0506,
    GL_CW = 0x0900,
    GL_CCW = 0x0901,
    GL_LINE_WIDTH = 0x0B21,
    GL_CULL_FACE = 0x0B44,
    GL_CULL_FACE_MODE = 0x0B45,
    GL_FRONT_FACE = 0x0B46,
    GL_DEPTH_RANGE = 0x0B70,
    GL_DEPTH_TEST = 0x0B71,
    GL_DEPTH_WRITEMASK = 0x0B72,
    GL_DEPTH_CLEAR_VALUE = 0x0B73,
    GL_DEPTH_FUNC = 0x0B74,
    GL_STENCIL_TEST = 0x0B90,
    GL_STENCIL_CLEAR_VALUE = 0x0B91,
    GL_STENCIL_FUNC = 0x0B92,
    GL_STENCIL_VALUE_MASK = 0x0B93,
    GL_STENCIL_FAIL = 0x0B94,
    GL_STENCIL_PASS_DEPTH_FAIL = 0x0B95,
    GL_STENCIL_PASS_DEPTH_PASS = 0x0B96,
    GL_STENCIL_REF = 0x0B97,
    GL_STENCIL_WRITEMASK = 0x0B98,
    GL_VIEWPORT = 0x0BA2,
    GL_DITHER = 0x0BD0,
    GL_BLEND = 0x0BE2,
    GL_SCISSOR_BOX = 0x0C10,
    GL_SCISSOR_TEST = 0x0C11,
    GL_COLOR_CLEAR_VALUE = 0x0C22,
    GL_COLOR_WRITEMASK = 0x0C23,
    GL_UNPACK_ALIGNMENT = 0x0CF5,
    GL_PACK_ALIGNMENT = 0x0D05,
    GL_MAX_TEXTURE_SIZE = 0x0D33,
    GL_MAX_VIEWPORT_DIMS = 0x0D3A,
    GL_SUBPIXEL_BITS = 0x0D50,
    GL_RED_BITS = 0x0D52,
    GL_GREEN_BITS = 0x0D53,
    GL_BLUE_BITS = 0x0D54,
    GL_ALPHA_BITS = 0x0D55,
    GL_DEPTH_BITS = 0x0D56,
    GL_STENCIL_BITS = 0x0D57,
    GL_TEXTURE_2D = 0x0DE1,
    GL_DONT_CARE = 0x1100,
    GL_FASTEST = 0x1101,
    GL_NICEST = 0x1102,
    GL_BYTE = 0x1400,
    GL_UNSIGNED_BYTE = 0x1401,
    GL_SHORT = 0x1402,
    GL_UNSIGNED_SHORT = 0x1403,
    GL_INT = 0x1404,
    GL_UNSIGNED_INT = 0x1405,
    GL_FLOAT = 0x1406,
    GL_FIXED = 0x140C,
    GL_INVERT = 0x150A,
    GL_TEXTURE = 0x1702,
    GL_DEPTH_COMPONENT = 0x1902,
    GL_ALPHA = 0x1906,
    GL_RGB = 0x1907,
    GL_RGBA = 0x1908,
    GL_LUMINANCE = 0x1909,
    GL_LUMINANCE_ALPHA = 0x190A,
    GL_KEEP = 0x1E00,
    GL_REPLACE = 0x1E01,
    GL_INCR = 0x1E02,
    GL_DECR = 0x1E03,
    GL_VENDOR = 0x1F00,
    GL_RENDERER = 0x1F01,
    GL_VERSION = 0x1F02,
    GL_EXTENSIONS = 0x1F03,
    GL_NEAREST = 0x2600,
    GL_LINEAR = 0x2601,
    GL_NEAREST_MIPMAP_NEAREST = 0x2700,
    GL_LINEAR_MIPMAP_NEAREST = 0x2701,
    GL_NEAREST_MIPMAP_LINEAR = 0x2702,
    GL_LINEAR_MIPMAP_LINEAR = 0x2703,
    GL_TEXTURE_MAG_FILTER = 0x2800,
    GL_TEXTURE_MIN_FILTER = 0x2801,
    GL_TEXTURE_WRAP_S = 0x2802,
    GL_TEXTURE_WRAP_T = 0x2803,
    GL_REPEAT = 0x2901,
    GL_POLYGON_OFFSET_UNITS = 0x2A00,
    GL_CONSTANT_COLOR = 0x8001,
    GL_ONE_MINUS_CONSTANT_COLOR = 0x8002,
    GL_CONSTANT_ALPHA = 0x8003,
    GL_ONE_MINUS_CONSTANT_ALPHA = 0x8004,
    GL_BLEND_COLOR = 0x8005,
    GL_FUNC_ADD = 0x8006,
    GL_BLEND_EQUATION = 0x8009,
    GL_BLEND_EQUATION_RGB = 0x8009,
    GL_FUNC_SUBTRACT = 0x800A,
    GL_FUNC_REVERSE_SUBTRACT = 0x800B,
    GL_UNSIGNED_SHORT_4_4_4_4 = 0x8033,
    GL_UNSIGNED_SHORT_5_5_5_1 = 0x8034,
    GL_POLYGON_OFFSET_FILL = 0x8037,
    GL_POLYGON_OFFSET_FACTOR = 0x8038,
    GL_RGBA4 = 0x8056,
    GL_RGB5_A1 = 0x8057,
    GL_TEXTURE_BINDING_2D = 0x8069,
    GL_SAMPLE_ALPHA_TO_COVERAGE = 0x809E,
    GL_SAMPLE_COVERAGE = 0x80A0,
    GL_SAMPLE_BUFFERS = 0x80A8,
    GL_SAMPLES = 0x80A9,
    GL_SAMPLE_COVERAGE_VALUE = 0x80AA,
    GL_SAMPLE_COVERAGE_INVERT = 0x80AB,
    GL_BLEND_DST_RGB = 0x80C8,
    GL_BLEND_SRC_RGB = 0x80C9,
    GL_BLEND_DST_ALPHA = 0x80CA,
    GL_BLEND_SRC_ALPHA = 0x80CB,
    GL_CLAMP_TO_EDGE = 0x812F,
    GL_GENERATE_MIPMAP_HINT = 0x8192,
    GL_DEPTH_COMPONENT16 = 0x81A5,
    GL_UNSIGNED_SHORT_5_6_5 = 0x8363,
    GL_MIRRORED_REPEAT = 0x8370,
    GL_ALIASED_POINT_SIZE_RANGE = 0x846D,
    GL_ALIASED_LINE_WIDTH_RANGE = 0x846E,
    GL_TEXTURE0 = 0x84C0,
    GL_TEXTURE1 = 0x84C1,
    GL_TEXTURE2 = 0x84C2,
    GL_TEXTURE3 = 0x84C3,
    GL_TEXTURE4 = 0x84C4,
    GL_TEXTURE5 = 0x84C5,
    GL_TEXTURE6 = 0x84C6,
    GL_TEXTURE7 = 0x84C7,
    GL_TEXTURE8 = 0x84C8,
    GL_TEXTURE9 = 0x84C9,
    GL_TEXTURE10 = 0x84CA,
    GL_TEXTURE11 = 0x84CB,
    GL_TEXTURE12 = 0x84CC,
    GL_TEXTURE13 = 0x84CD,
    GL_TEXTURE14 = 0x84CE,
    GL_TEXTURE15 = 0x84CF,
    GL_TEXTURE16 = 0x84D0,
    GL_TEXTURE17 = 0x84D1,
    GL_TEXTURE18 = 0x84D2,
    GL_TEXTURE19 = 0x84D3,
    GL_TEXTURE20 = 0x84D4,
    GL_TEXTURE21 = 0x84D5,
    GL_TEXTURE22 = 0x84D6,
    GL_TEXTURE23 = 0x84D7,
    GL_TEXTURE24 = 0x84D8,
    GL_TEXTURE25 = 0x84D9,
    GL_TEXTURE26 = 0x84DA,
    GL_TEXTURE27 = 0x84DB,
    GL_TEXTURE28 = 0x84DC,
    GL_TEXTURE29 = 0x84DD,
    GL_TEXTURE30 = 0x84DE,
    GL_TEXTURE31 = 0x84DF,
    GL_ACTIVE_TEXTURE = 0x84E0,
    GL_MAX_RENDERBUFFER_SIZE = 0x84E8,
    GL_INCR_WRAP = 0x8507,
    GL_DECR_WRAP = 0x8508,
    GL_TEXTURE_CUBE_MAP = 0x8513,
    GL_TEXTURE_BINDING_CUBE_MAP = 0x8514,
    GL_TEXTURE_CUBE_MAP_POSITIVE_X = 0x8515,
    GL_TEXTURE_CUBE_MAP_NEGATIVE_X = 0x8516,
    GL_TEXTURE_CUBE_MAP_POSITIVE_Y = 0x8517,
    GL_TEXTURE_CUBE_MAP_NEGATIVE_Y = 0x8518,
    GL_TEXTURE_CUBE_MAP_POSITIVE_Z = 0x8519,
    GL_TEXTURE_CUBE_MAP_NEGATIVE_Z = 0x851A,
    GL_MAX_CUBE_MAP_TEXTURE_SIZE = 0x851C,
    GL_VERTEX_ATTRIB_ARRAY_ENABLED = 0x8622,
    GL_VERTEX_ATTRIB_ARRAY_SIZE = 0x8623,
    GL_VERTEX_ATTRIB_ARRAY_STRIDE = 0x8624,
    GL_VERTEX_ATTRIB_ARRAY_TYPE = 0x8625,
    GL_CURRENT_VERTEX_ATTRIB = 0x8626,
    GL_VERTEX_ATTRIB_ARRAY_POINTER = 0x8645,
    GL_NUM_COMPRESSED_TEXTURE_FORMATS = 0x86A2,
    GL_COMPRESSED_TEXTURE_FORMATS = 0x86A3,
    GL_BUFFER_SIZE = 0x8764,
    GL_BUFFER_USAGE = 0x8765,
    GL_STENCIL_BACK_FUNC = 0x8800,
    GL_STENCIL_BACK_FAIL = 0x8801,
    GL_STENCIL_BACK_PASS_DEPTH_FAIL = 0x8802,
    GL_STENCIL_BACK_PASS_DEPTH_PASS = 0x8803,
    GL_BLEND_EQUATION_ALPHA = 0x883D,
    GL_MAX_VERTEX_ATTRIBS = 0x8869,
    GL_VERTEX_ATTRIB_ARRAY_NORMALIZED = 0x886A,
    GL_MAX_TEXTURE_IMAGE_UNITS = 0x8872,
    GL_ARRAY_BUFFER = 0x8892,
    GL_ELEMENT_ARRAY_BUFFER = 0x8893,
    GL_ARRAY_BUFFER_BINDING = 0x8894,
    GL_ELEMENT_ARRAY_BUFFER_BINDING = 0x8895,
    GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING = 0x889F,
    GL_STREAM_DRAW = 0x88E0,
    GL_STATIC_DRAW = 0x88E4,
    GL_DYNAMIC_DRAW = 0x88E8,
    GL_FRAGMENT_SHADER = 0x8B30,
    GL_VERTEX_SHADER = 0x8B31,
    GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS = 0x8B4C,
    GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS = 0x8B4D,
    GL_SHADER_TYPE = 0x8B4F,
    GL_FLOAT_VEC2 = 0x8B50,
    GL_FLOAT_VEC3 = 0x8B51,
    GL_FLOAT_VEC4 = 0x8B52,
    GL_INT_VEC2 = 0x8B53,
    GL_INT_VEC3 = 0x8B54,
    GL_INT_VEC4 = 0x8B55,
    GL_BOOL = 0x8B56,
    GL_BOOL_VEC2 = 0x8B57,
    GL_BOOL_VEC3 = 0x8B58,
    GL_BOOL_VEC4 = 0x8B59,
    GL_FLOAT_MAT2 = 0x8B5A,
    GL_FLOAT_MAT3 = 0x8B5B,
    GL_FLOAT_MAT4 = 0x8B5C,
    GL_SAMPLER_2D = 0x8B5E,
    GL_SAMPLER_CUBE = 0x8B60,
    GL_DELETE_STATUS = 0x8B80,
    GL_COMPILE_STATUS = 0x8B81,
    GL_LINK_STATUS = 0x8B82,
    GL_VALIDATE_STATUS = 0x8B83,
    GL_INFO_LOG_LENGTH = 0x8B84,
    GL_ATTACHED_SHADERS = 0x8B85,
    GL_ACTIVE_UNIFORMS = 0x8B86,
    GL_ACTIVE_UNIFORM_MAX_LENGTH = 0x8B87,
    GL_SHADER_SOURCE_LENGTH = 0x8B88,
    GL_ACTIVE_ATTRIBUTES = 0x8B89,
    GL_ACTIVE_ATTRIBUTE_MAX_LENGTH = 0x8B8A,
    GL_SHADING_LANGUAGE_VERSION = 0x8B8C,
    GL_CURRENT_PROGRAM = 0x8B8D,
    GL_IMPLEMENTATION_COLOR_READ_TYPE = 0x8B9A,
    GL_IMPLEMENTATION_COLOR_READ_FORMAT = 0x8B9B,
    GL_STENCIL_BACK_REF = 0x8CA3,
    GL_STENCIL_BACK_VALUE_MASK = 0x8CA4,
    GL_STENCIL_BACK_WRITEMASK = 0x8CA5,
    GL_FRAMEBUFFER_BINDING = 0x8CA6,
    GL_RENDERBUFFER_BINDING = 0x8CA7,
    GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE = 0x8CD0,
    GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME = 0x8CD1,
    GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL = 0x8CD2,
    GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE = 0x8CD3,
    GL_FRAMEBUFFER_COMPLETE = 0x8CD5,
    GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT = 0x8CD6,
    GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT = 0x8CD7,
    GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS = 0x8CD9,
    GL_FRAMEBUFFER_UNSUPPORTED = 0x8CDD,
    GL_COLOR_ATTACHMENT0 = 0x8CE0,
    GL_DEPTH_ATTACHMENT = 0x8D00,
    GL_STENCIL_ATTACHMENT = 0x8D20,
    GL_FRAMEBUFFER = 0x8D40,
    GL_RENDERBUFFER = 0x8D41,
    GL_RENDERBUFFER_WIDTH = 0x8D42,
    GL_RENDERBUFFER_HEIGHT = 0x8D43,
    GL_RENDERBUFFER_INTERNAL_FORMAT = 0x8D44,
    GL_STENCIL_INDEX8 = 0x8D48,
    GL_RENDERBUFFER_RED_SIZE = 0x8D50,
    GL_RENDERBUFFER_GREEN_SIZE = 0x8D51,
    GL_RENDERBUFFER_BLUE_SIZE = 0x8D52,
    GL_RENDERBUFFER_ALPHA_SIZE = 0x8D53,
    GL_RENDERBUFFER_DEPTH_SIZE = 0x8D54,
    GL_RENDERBUFFER_STENCIL_SIZE = 0x8D55,
    GL_RGB565 = 0x8D62,
    GL_LOW_FLOAT = 0x8DF0,
    GL_MEDIUM_FLOAT = 0x8DF1,
    GL_HIGH_FLOAT = 0x8DF2,
    GL_LOW_INT = 0x8DF3,
    GL_MEDIUM_INT = 0x8DF4,
    GL_HIGH_INT = 0x8DF5,
    GL_SHADER_BINARY_FORMATS = 0x8DF8,
    GL_NUM_SHADER_BINARY_FORMATS = 0x8DF9,
    GL_SHADER_COMPILER = 0x8DFA,
    GL_MAX_VERTEX_UNIFORM_VECTORS = 0x8DFB,
    GL_MAX_VARYING_VECTORS = 0x8DFC,
    GL_MAX_FRAGMENT_UNIFORM_VECTORS = 0x8DFD,
    GL_ONE = 1,
    GL_TRUE = 1
};

} // namespace enums

using namespace types;
using namespace enums;

typedef void (*PFNGLACTIVETEXTUREPROC)(GLenum texture);
typedef void (*PFNGLATTACHSHADERPROC)(GLuint program, GLuint shader);
typedef void (*PFNGLBINDATTRIBLOCATIONPROC)(GLuint program, GLuint index, const GLchar *name);
typedef void (*PFNGLBINDBUFFERPROC)(GLenum target, GLuint buffer);
typedef void (*PFNGLBINDFRAMEBUFFERPROC)(GLenum target, GLuint framebuffer);
typedef void (*PFNGLBINDRENDERBUFFERPROC)(GLenum target, GLuint renderbuffer);
typedef void (*PFNGLBINDTEXTUREPROC)(GLenum target, GLuint texture);
typedef void (*PFNGLBLENDCOLORPROC)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (*PFNGLBLENDEQUATIONPROC)(GLenum mode);
typedef void (*PFNGLBLENDEQUATIONSEPARATEPROC)(GLenum modeRGB, GLenum modeAlpha);
typedef void (*PFNGLBLENDFUNCPROC)(GLenum sfactor, GLenum dfactor);
typedef void (*PFNGLBLENDFUNCSEPARATEPROC)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
typedef void (*PFNGLBUFFERDATAPROC)(GLenum target, GLsizeiptr size, const void *data, GLenum usage);
typedef void (*PFNGLBUFFERSUBDATAPROC)(GLenum target, GLintptr offset, GLsizeiptr size, const void *data);
typedef GLenum (*PFNGLCHECKFRAMEBUFFERSTATUSPROC)(GLenum target);
typedef void (*PFNGLCLEARPROC)(GLbitfield mask);
typedef void (*PFNGLCLEARCOLORPROC)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (*PFNGLCLEARDEPTHFPROC)(GLfloat d);
typedef void (*PFNGLCLEARSTENCILPROC)(GLint s);
typedef void (*PFNGLCOLORMASKPROC)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
typedef void (*PFNGLCOMPILESHADERPROC)(GLuint shader);
typedef void (*PFNGLCOMPRESSEDTEXIMAGE2DPROC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data);
typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
typedef void (*PFNGLCOPYTEXIMAGE2DPROC)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
typedef void (*PFNGLCOPYTEXSUBIMAGE2DPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef GLuint (*PFNGLCREATEPROGRAMPROC)();
typedef GLuint (*PFNGLCREATESHADERPROC)(GLenum type);
typedef void (*PFNGLCULLFACEPROC)(GLenum mode);
typedef void (*PFNGLDELETEBUFFERSPROC)(GLsizei n, const GLuint *buffers);
typedef void (*PFNGLDELETEFRAMEBUFFERSPROC)(GLsizei n, const GLuint *framebuffers);
typedef void (*PFNGLDELETEPROGRAMPROC)(GLuint program);
typedef void (*PFNGLDELETERENDERBUFFERSPROC)(GLsizei n, const GLuint *renderbuffers);
typedef void (*PFNGLDELETESHADERPROC)(GLuint shader);
typedef void (*PFNGLDELETETEXTURESPROC)(GLsizei n, const GLuint *textures);
typedef void (*PFNGLDEPTHFUNCPROC)(GLenum func);
typedef void (*PFNGLDEPTHMASKPROC)(GLboolean flag);
typedef void (*PFNGLDEPTHRANGEFPROC)(GLfloat n, GLfloat f);
typedef void (*PFNGLDETACHSHADERPROC)(GLuint program, GLuint shader);
typedef void (*PFNGLDISABLEPROC)(GLenum cap);
typedef void (*PFNGLDISABLEVERTEXATTRIBARRAYPROC)(GLuint index);
typedef void (*PFNGLDRAWARRAYSPROC)(GLenum mode, GLint first, GLsizei count);
typedef void (*PFNGLDRAWELEMENTSPROC)(GLenum mode, GLsizei count, GLenum type, const void *indices);
typedef void (*PFNGLENABLEPROC)(GLenum cap);
typedef void (*PFNGLENABLEVERTEXATTRIBARRAYPROC)(GLuint index);
typedef void (*PFNGLFINISHPROC)();
typedef void (*PFNGLFLUSHPROC)();
typedef void (*PFNGLFRAMEBUFFERRENDERBUFFERPROC)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (*PFNGLFRAMEBUFFERTEXTURE2DPROC)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (*PFNGLFRONTFACEPROC)(GLenum mode);
typedef void (*PFNGLGENBUFFERSPROC)(GLsizei n, GLuint *buffers);
typedef void (*PFNGLGENFRAMEBUFFERSPROC)(GLsizei n, GLuint *framebuffers);
typedef void (*PFNGLGENRENDERBUFFERSPROC)(GLsizei n, GLuint *renderbuffers);
typedef void (*PFNGLGENTEXTURESPROC)(GLsizei n, GLuint *textures);
typedef void (*PFNGLGENERATEMIPMAPPROC)(GLenum target);
typedef void (*PFNGLGETACTIVEATTRIBPROC)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
typedef void (*PFNGLGETACTIVEUNIFORMPROC)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
typedef void (*PFNGLGETATTACHEDSHADERSPROC)(GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders);
typedef GLint (*PFNGLGETATTRIBLOCATIONPROC)(GLuint program, const GLchar *name);
typedef void (*PFNGLGETBOOLEANVPROC)(GLenum pname, GLboolean *data);
typedef void (*PFNGLGETBUFFERPARAMETERIVPROC)(GLenum target, GLenum pname, GLint *params);
typedef GLenum (*PFNGLGETERRORPROC)();
typedef void (*PFNGLGETFLOATVPROC)(GLenum pname, GLfloat *data);
typedef void (*PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)(GLenum target, GLenum attachment, GLenum pname, GLint *params);
typedef void (*PFNGLGETINTEGERVPROC)(GLenum pname, GLint *data);
typedef void (*PFNGLGETPROGRAMINFOLOGPROC)(GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void (*PFNGLGETPROGRAMIVPROC)(GLuint program, GLenum pname, GLint *params);
typedef void (*PFNGLGETRENDERBUFFERPARAMETERIVPROC)(GLenum target, GLenum pname, GLint *params);
typedef void (*PFNGLGETSHADERINFOLOGPROC)(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void (*PFNGLGETSHADERPRECISIONFORMATPROC)(GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision);
typedef void (*PFNGLGETSHADERSOURCEPROC)(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source);
typedef void (*PFNGLGETSHADERIVPROC)(GLuint shader, GLenum pname, GLint *params);
typedef const GLubyte *(*PFNGLGETSTRINGPROC)(GLenum name);
typedef void (*PFNGLGETTEXPARAMETERFVPROC)(GLenum target, GLenum pname, GLfloat *params);
typedef void (*PFNGLGETTEXPARAMETERIVPROC)(GLenum target, GLenum pname, GLint *params);
typedef GLint (*PFNGLGETUNIFORMLOCATIONPROC)(GLuint program, const GLchar *name);
typedef void (*PFNGLGETUNIFORMFVPROC)(GLuint program, GLint location, GLfloat *params);
typedef void (*PFNGLGETUNIFORMIVPROC)(GLuint program, GLint location, GLint *params);
typedef void (*PFNGLGETVERTEXATTRIBPOINTERVPROC)(GLuint index, GLenum pname, void **pointer);
typedef void (*PFNGLGETVERTEXATTRIBFVPROC)(GLuint index, GLenum pname, GLfloat *params);
typedef void (*PFNGLGETVERTEXATTRIBIVPROC)(GLuint index, GLenum pname, GLint *params);
typedef void (*PFNGLHINTPROC)(GLenum target, GLenum mode);
typedef GLboolean (*PFNGLISBUFFERPROC)(GLuint buffer);
typedef GLboolean (*PFNGLISENABLEDPROC)(GLenum cap);
typedef GLboolean (*PFNGLISFRAMEBUFFERPROC)(GLuint framebuffer);
typedef GLboolean (*PFNGLISPROGRAMPROC)(GLuint program);
typedef GLboolean (*PFNGLISRENDERBUFFERPROC)(GLuint renderbuffer);
typedef GLboolean (*PFNGLISSHADERPROC)(GLuint shader);
typedef GLboolean (*PFNGLISTEXTUREPROC)(GLuint texture);
typedef void (*PFNGLLINEWIDTHPROC)(GLfloat width);
typedef void (*PFNGLLINKPROGRAMPROC)(GLuint program);
typedef void (*PFNGLPIXELSTOREIPROC)(GLenum pname, GLint param);
typedef void (*PFNGLPOLYGONOFFSETPROC)(GLfloat factor, GLfloat units);
typedef void (*PFNGLREADPIXELSPROC)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels);
typedef void (*PFNGLRELEASESHADERCOMPILERPROC)();
typedef void (*PFNGLRENDERBUFFERSTORAGEPROC)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (*PFNGLSAMPLECOVERAGEPROC)(GLfloat value, GLboolean invert);
typedef void (*PFNGLSCISSORPROC)(GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (*PFNGLSHADERBINARYPROC)(GLsizei count, const GLuint *shaders, GLenum binaryformat, const void *binary, GLsizei length);
typedef void (*PFNGLSHADERSOURCEPROC)(GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length);
typedef void (*PFNGLSTENCILFUNCPROC)(GLenum func, GLint ref, GLuint mask);
typedef void (*PFNGLSTENCILFUNCSEPARATEPROC)(GLenum face, GLenum func, GLint ref, GLuint mask);
typedef void (*PFNGLSTENCILMASKPROC)(GLuint mask);
typedef void (*PFNGLSTENCILMASKSEPARATEPROC)(GLenum face, GLuint mask);
typedef void (*PFNGLSTENCILOPPROC)(GLenum fail, GLenum zfail, GLenum zpass);
typedef void (*PFNGLSTENCILOPSEPARATEPROC)(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
typedef void (*PFNGLTEXIMAGE2DPROC)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
typedef void (*PFNGLTEXPARAMETERFPROC)(GLenum target, GLenum pname, GLfloat param);
typedef void (*PFNGLTEXPARAMETERFVPROC)(GLenum target, GLenum pname, const GLfloat *params);
typedef void (*PFNGLTEXPARAMETERIPROC)(GLenum target, GLenum pname, GLint param);
typedef void (*PFNGLTEXPARAMETERIVPROC)(GLenum target, GLenum pname, const GLint *params);
typedef void (*PFNGLTEXSUBIMAGE2DPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
typedef void (*PFNGLUNIFORM1FPROC)(GLint location, GLfloat v0);
typedef void (*PFNGLUNIFORM1FVPROC)(GLint location, GLsizei count, const GLfloat *value);
typedef void (*PFNGLUNIFORM1IPROC)(GLint location, GLint v0);
typedef void (*PFNGLUNIFORM1IVPROC)(GLint location, GLsizei count, const GLint *value);
typedef void (*PFNGLUNIFORM2FPROC)(GLint location, GLfloat v0, GLfloat v1);
typedef void (*PFNGLUNIFORM2FVPROC)(GLint location, GLsizei count, const GLfloat *value);
typedef void (*PFNGLUNIFORM2IPROC)(GLint location, GLint v0, GLint v1);
typedef void (*PFNGLUNIFORM2IVPROC)(GLint location, GLsizei count, const GLint *value);
typedef void (*PFNGLUNIFORM3FPROC)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (*PFNGLUNIFORM3FVPROC)(GLint location, GLsizei count, const GLfloat *value);
typedef void (*PFNGLUNIFORM3IPROC)(GLint location, GLint v0, GLint v1, GLint v2);
typedef void (*PFNGLUNIFORM3IVPROC)(GLint location, GLsizei count, const GLint *value);
typedef void (*PFNGLUNIFORM4FPROC)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (*PFNGLUNIFORM4FVPROC)(GLint location, GLsizei count, const GLfloat *value);
typedef void (*PFNGLUNIFORM4IPROC)(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (*PFNGLUNIFORM4IVPROC)(GLint location, GLsizei count, const GLint *value);
typedef void (*PFNGLUNIFORMMATRIX2FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (*PFNGLUNIFORMMATRIX3FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (*PFNGLUNIFORMMATRIX4FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (*PFNGLUSEPROGRAMPROC)(GLuint program);
typedef void (*PFNGLVALIDATEPROGRAMPROC)(GLuint program);
typedef void (*PFNGLVERTEXATTRIB1FPROC)(GLuint index, GLfloat x);
typedef void (*PFNGLVERTEXATTRIB1FVPROC)(GLuint index, const GLfloat *v);
typedef void (*PFNGLVERTEXATTRIB2FPROC)(GLuint index, GLfloat x, GLfloat y);
typedef void (*PFNGLVERTEXATTRIB2FVPROC)(GLuint index, const GLfloat *v);
typedef void (*PFNGLVERTEXATTRIB3FPROC)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
typedef void (*PFNGLVERTEXATTRIB3FVPROC)(GLuint index, const GLfloat *v);
typedef void (*PFNGLVERTEXATTRIB4FPROC)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (*PFNGLVERTEXATTRIB4FVPROC)(GLuint index, const GLfloat *v);
typedef void (*PFNGLVERTEXATTRIBPOINTERPROC)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer);
typedef void (*PFNGLVIEWPORTPROC)(GLint x, GLint y, GLsizei width, GLsizei height);

class Context {
    PFNGLACTIVETEXTUREPROC _activeTexture;
    PFNGLATTACHSHADERPROC _attachShader; // ok
    PFNGLBINDATTRIBLOCATIONPROC _bindAttribLocation; // not used
    PFNGLBINDBUFFERPROC _bindBuffer; // ok
    PFNGLBINDFRAMEBUFFERPROC _bindFramebuffer;
    PFNGLBINDRENDERBUFFERPROC _bindRenderbuffer;
    PFNGLBINDTEXTUREPROC _bindTexture;
    PFNGLBLENDCOLORPROC _blendColor;
    PFNGLBLENDEQUATIONPROC _blendEquation;
    PFNGLBLENDEQUATIONSEPARATEPROC _blendEquationSeparate;
    PFNGLBLENDFUNCPROC _blendFunc;
    PFNGLBLENDFUNCSEPARATEPROC _blendFuncSeparate;
    PFNGLBUFFERDATAPROC _bufferData;
    PFNGLBUFFERSUBDATAPROC _bufferSubData;
    PFNGLCHECKFRAMEBUFFERSTATUSPROC _checkFramebufferStatus;
    PFNGLCLEARPROC _clear;
    PFNGLCLEARCOLORPROC _clearColor;
    PFNGLCLEARDEPTHFPROC _clearDepthf;
    PFNGLCLEARSTENCILPROC _clearStencil;
    PFNGLCOLORMASKPROC _colorMask;
    PFNGLCOMPILESHADERPROC _compileShader; // ok
    PFNGLCOMPRESSEDTEXIMAGE2DPROC _compressedTexImage2D;
    PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC _compressedTexSubImage2D;
    PFNGLCOPYTEXIMAGE2DPROC _copyTexImage2D;
    PFNGLCOPYTEXSUBIMAGE2DPROC _copyTexSubImage2D;
    PFNGLCREATEPROGRAMPROC _createProgram; // ok
    PFNGLCREATESHADERPROC _createShader; // ok
    PFNGLCULLFACEPROC _cullFace;
    PFNGLDELETEBUFFERSPROC _deleteBuffers; // ok
    PFNGLDELETEFRAMEBUFFERSPROC _deleteFramebuffers;
    PFNGLDELETEPROGRAMPROC _deleteProgram; // ok
    PFNGLDELETERENDERBUFFERSPROC _deleteRenderbuffers;
    PFNGLDELETESHADERPROC _deleteShader; // ok
    PFNGLDELETETEXTURESPROC _deleteTextures;
    PFNGLDEPTHFUNCPROC _depthFunc;
    PFNGLDEPTHMASKPROC _depthMask;
    PFNGLDEPTHRANGEFPROC _depthRangef;
    PFNGLDETACHSHADERPROC _detachShader;
    PFNGLDISABLEPROC _disable;
    PFNGLDISABLEVERTEXATTRIBARRAYPROC _disableVertexAttribArray;
    PFNGLDRAWARRAYSPROC _drawArrays; // ok
    PFNGLDRAWELEMENTSPROC _drawElements; // ok
    PFNGLENABLEPROC _enable;
    PFNGLENABLEVERTEXATTRIBARRAYPROC _enableVertexAttribArray; // ok
    PFNGLFINISHPROC _finish;
    PFNGLFLUSHPROC _flush;
    PFNGLFRAMEBUFFERRENDERBUFFERPROC _framebufferRenderbuffer;
    PFNGLFRAMEBUFFERTEXTURE2DPROC _framebufferTexture2D;
    PFNGLFRONTFACEPROC _frontFace;
    PFNGLGENBUFFERSPROC _genBuffers; // ok
    PFNGLGENFRAMEBUFFERSPROC _genFramebuffers;
    PFNGLGENRENDERBUFFERSPROC _genRenderbuffers;
    PFNGLGENTEXTURESPROC _genTextures;
    PFNGLGENERATEMIPMAPPROC _generateMipmap;
    PFNGLGETACTIVEATTRIBPROC _getActiveAttrib; // ok
    PFNGLGETACTIVEUNIFORMPROC _getActiveUniform; // ok
    PFNGLGETATTACHEDSHADERSPROC _getAttachedShaders; // not used
    PFNGLGETATTRIBLOCATIONPROC _getAttribLocation; // ok
    PFNGLGETBOOLEANVPROC _getBooleanv;
    PFNGLGETBUFFERPARAMETERIVPROC _getBufferParameteriv;
    PFNGLGETERRORPROC _getError;
    PFNGLGETFLOATVPROC _getFloatv;
    PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC _getFramebufferAttachmentParameteriv;
    PFNGLGETINTEGERVPROC _getIntegerv; // ok
    PFNGLGETPROGRAMINFOLOGPROC _getProgramInfoLog; // ok
    PFNGLGETPROGRAMIVPROC _getProgramiv; // ok
    PFNGLGETRENDERBUFFERPARAMETERIVPROC _getRenderbufferParameteriv;
    PFNGLGETSHADERINFOLOGPROC _getShaderInfoLog; // ok
    PFNGLGETSHADERPRECISIONFORMATPROC _getShaderPrecisionFormat;
    PFNGLGETSHADERSOURCEPROC _getShaderSource;
    PFNGLGETSHADERIVPROC _getShaderiv;
    PFNGLGETSTRINGPROC _getString;
    PFNGLGETTEXPARAMETERFVPROC _getTexParameterfv;
    PFNGLGETTEXPARAMETERIVPROC _getTexParameteriv;
    PFNGLGETUNIFORMLOCATIONPROC _getUniformLocation; // ok
    PFNGLGETUNIFORMFVPROC _getUniformfv;
    PFNGLGETUNIFORMIVPROC _getUniformiv;
    PFNGLGETVERTEXATTRIBPOINTERVPROC _getVertexAttribPointerv;
    PFNGLGETVERTEXATTRIBFVPROC _getVertexAttribfv;
    PFNGLGETVERTEXATTRIBIVPROC _getVertexAttribiv;
    PFNGLHINTPROC _hint;
    PFNGLISBUFFERPROC _isBuffer;
    PFNGLISENABLEDPROC _isEnabled;
    PFNGLISFRAMEBUFFERPROC _isFramebuffer;
    PFNGLISPROGRAMPROC _isProgram;
    PFNGLISRENDERBUFFERPROC _isRenderbuffer;
    PFNGLISSHADERPROC _isShader;
    PFNGLISTEXTUREPROC _isTexture;
    PFNGLLINEWIDTHPROC _lineWidth;
    PFNGLLINKPROGRAMPROC _linkProgram;
    PFNGLPIXELSTOREIPROC _pixelStorei;
    PFNGLPOLYGONOFFSETPROC _polygonOffset;
    PFNGLREADPIXELSPROC _readPixels;
    PFNGLRELEASESHADERCOMPILERPROC _releaseShaderCompiler;
    PFNGLRENDERBUFFERSTORAGEPROC _renderbufferStorage;
    PFNGLSAMPLECOVERAGEPROC _sampleCoverage;
    PFNGLSCISSORPROC _scissor;
    PFNGLSHADERBINARYPROC _shaderBinary;
    PFNGLSHADERSOURCEPROC _shaderSource;
    PFNGLSTENCILFUNCPROC _stencilFunc;
    PFNGLSTENCILFUNCSEPARATEPROC _stencilFuncSeparate;
    PFNGLSTENCILMASKPROC _stencilMask;
    PFNGLSTENCILMASKSEPARATEPROC _stencilMaskSeparate;
    PFNGLSTENCILOPPROC _stencilOp;
    PFNGLSTENCILOPSEPARATEPROC _stencilOpSeparate;
    PFNGLTEXIMAGE2DPROC _texImage2D;
    PFNGLTEXPARAMETERFPROC _texParameterf;
    PFNGLTEXPARAMETERFVPROC _texParameterfv;
    PFNGLTEXPARAMETERIPROC _texParameteri;
    PFNGLTEXPARAMETERIVPROC _texParameteriv;
    PFNGLTEXSUBIMAGE2DPROC _texSubImage2D;
    PFNGLUNIFORM1FPROC _uniform1f;
    PFNGLUNIFORM1FVPROC _uniform1fv;
    PFNGLUNIFORM1IPROC _uniform1i;
    PFNGLUNIFORM1IVPROC _uniform1iv;
    PFNGLUNIFORM2FPROC _uniform2f;
    PFNGLUNIFORM2FVPROC _uniform2fv;
    PFNGLUNIFORM2IPROC _uniform2i;
    PFNGLUNIFORM2IVPROC _uniform2iv;
    PFNGLUNIFORM3FPROC _uniform3f;
    PFNGLUNIFORM3FVPROC _uniform3fv;
    PFNGLUNIFORM3IPROC _uniform3i;
    PFNGLUNIFORM3IVPROC _uniform3iv;
    PFNGLUNIFORM4FPROC _uniform4f;
    PFNGLUNIFORM4FVPROC _uniform4fv;
    PFNGLUNIFORM4IPROC _uniform4i;
    PFNGLUNIFORM4IVPROC _uniform4iv;
    PFNGLUNIFORMMATRIX2FVPROC _uniformMatrix2fv;
    PFNGLUNIFORMMATRIX3FVPROC _uniformMatrix3fv;
    PFNGLUNIFORMMATRIX4FVPROC _uniformMatrix4fv;
    PFNGLUSEPROGRAMPROC _useProgram;
    PFNGLVALIDATEPROGRAMPROC _validateProgram;
    PFNGLVERTEXATTRIB1FPROC _vertexAttrib1f;
    PFNGLVERTEXATTRIB1FVPROC _vertexAttrib1fv;
    PFNGLVERTEXATTRIB2FPROC _vertexAttrib2f;
    PFNGLVERTEXATTRIB2FVPROC _vertexAttrib2fv;
    PFNGLVERTEXATTRIB3FPROC _vertexAttrib3f;
    PFNGLVERTEXATTRIB3FVPROC _vertexAttrib3fv;
    PFNGLVERTEXATTRIB4FPROC _vertexAttrib4f;
    PFNGLVERTEXATTRIB4FVPROC _vertexAttrib4fv;
    PFNGLVERTEXATTRIBPOINTERPROC _vertexAttribPointer;
    PFNGLVIEWPORTPROC _viewport;

public:
    template<typename GetProcAddress>
    Context(GetProcAddress getProcAddress);

    Context(const Context&) = delete;

    Context(Context&&) = default;

    void activeTexture(GLenum texture) {
        _activeTexture(texture);
    };

    void attachShader(GLuint program, GLuint shader) {
        _attachShader(program, shader);
    };

    void bindAttribLocation(GLuint program, GLuint index, const GLchar *name) {
        _bindAttribLocation(program, index, name);
    };

    void bindBuffer(GLenum target, GLuint buffer) {
        _bindBuffer(target, buffer);
    };

    void bindFramebuffer(GLenum target, GLuint framebuffer) {
        _bindFramebuffer(target, framebuffer);
    };

    void bindRenderbuffer(GLenum target, GLuint renderbuffer) {
        _bindRenderbuffer(target, renderbuffer);
    };

    void bindTexture(GLenum target, GLuint texture) {
        _bindTexture(target, texture);
    };

    void blendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) {
        _blendColor(red, green, blue, alpha);
    };

    void blendEquation(GLenum mode) {
        _blendEquation(mode);
    };

    void blendEquationSeparate(GLenum modeRGB, GLenum modeAlpha) {
        _blendEquationSeparate(modeRGB, modeAlpha);
    };

    void blendFunc(GLenum sfactor, GLenum dfactor) {
        _blendFunc(sfactor, dfactor);
    };

    void blendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) {
        _blendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
    };

    void bufferData(GLenum target, GLsizeiptr size, const void *data, GLenum usage) {
        _bufferData(target, size, data, usage);
    };

    void bufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void *data) {
        _bufferSubData(target, offset, size, data);
    };

    GLenum checkFramebufferStatus(GLenum target) {
        return _checkFramebufferStatus(target);
    };

    void clear(GLbitfield mask) {
        _clear(mask);
    };

    void clearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) {
        _clearColor(red, green, blue, alpha);
    };

    void clearDepthf(GLfloat d) {
        _clearDepthf(d);
    };

    void clearStencil(GLint s) {
        _clearStencil(s);
    };

    void colorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) {
        _colorMask(red, green, blue, alpha);
    };

    void compileShader(GLuint shader) {
        _compileShader(shader);
    };

    void compressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data) {
        _compressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
    };

    void compressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data) {
        _compressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
    };

    void copyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) {
        _copyTexImage2D(target, level, internalformat, x, y, width, height, border);
    };

    void copyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
        _copyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
    };

    GLuint createProgram() {
        return _createProgram();
    };

    GLuint createShader(GLenum type) {
        return _createShader(type);
    };

    void cullFace(GLenum mode) {
        _cullFace(mode);
    };

    void deleteBuffers(GLsizei n, const GLuint *buffers) {
        _deleteBuffers(n, buffers);
    };

    void deleteFramebuffers(GLsizei n, const GLuint *framebuffers) {
        _deleteFramebuffers(n, framebuffers);
    };

    void deleteProgram(GLuint program) {
        _deleteProgram(program);
    };

    void deleteRenderbuffers(GLsizei n, const GLuint *renderbuffers) {
        _deleteRenderbuffers(n, renderbuffers);
    };

    void deleteShader(GLuint shader) {
        _deleteShader(shader);
    };

    void deleteTextures(GLsizei n, const GLuint *textures) {
        _deleteTextures(n, textures);
    };

    void depthFunc(GLenum func) {
        _depthFunc(func);
    };

    void depthMask(GLboolean flag) {
        _depthMask(flag);
    };

    void depthRangef(GLfloat n, GLfloat f) {
        _depthRangef(n, f);
    };

    void detachShader(GLuint program, GLuint shader) {
        _detachShader(program, shader);
    };

    void disable(GLenum cap) {
        _disable(cap);
    };

    void disableVertexAttribArray(GLuint index) {
        _disableVertexAttribArray(index);
    };

    void drawArrays(GLenum mode, GLint first, GLsizei count) {
        _drawArrays(mode, first, count);
    };

    void drawElements(GLenum mode, GLsizei count, GLenum type, const void *indices) {
        _drawElements(mode, count, type, indices);
    };

    void enable(GLenum cap) {
        _enable(cap);
    };

    void enableVertexAttribArray(GLuint index) {
        _enableVertexAttribArray(index);
    };

    void finish() {
        _finish();
    };

    void flush() {
        _flush();
    };

    void framebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) {
        _framebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
    };

    void framebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
        _framebufferTexture2D(target, attachment, textarget, texture, level);
    };

    void frontFace(GLenum mode) {
        _frontFace(mode);
    };

    void genBuffers(GLsizei n, GLuint *buffers) {
        _genBuffers(n, buffers);
    };

    void genFramebuffers(GLsizei n, GLuint *framebuffers) {
        _genFramebuffers(n, framebuffers);
    };

    void genRenderbuffers(GLsizei n, GLuint *renderbuffers) {
        _genRenderbuffers(n, renderbuffers);
    };

    void genTextures(GLsizei n, GLuint *textures) {
        _genTextures(n, textures);
    };

    void generateMipmap(GLenum target) {
        _generateMipmap(target);
    };

    void getActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name) {
        _getActiveAttrib(program, index, bufSize, length, size, type, name);
    };

    void getActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name) {
        _getActiveUniform(program, index, bufSize, length, size, type, name);
    };

    void getAttachedShaders(GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders) {
        _getAttachedShaders(program, maxCount, count, shaders);
    };

    GLint getAttribLocation(GLuint program, const GLchar *name) {
        return _getAttribLocation(program, name);
    };

    void getBooleanv(GLenum pname, GLboolean *data) {
        _getBooleanv(pname, data);
    };

    void getBufferParameteriv(GLenum target, GLenum pname, GLint *params) {
        _getBufferParameteriv(target, pname, params);
    };

    GLenum getError() {
        return _getError();
    };

    void getFloatv(GLenum pname, GLfloat *data) {
        _getFloatv(pname, data);
    };

    void getFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint *params) {
        _getFramebufferAttachmentParameteriv(target, attachment, pname, params);
    };

    void getIntegerv(GLenum pname, GLint *data) {
        _getIntegerv(pname, data);
    };

    void getProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog) {
        _getProgramInfoLog(program, bufSize, length, infoLog);
    };

    void getProgramiv(GLuint program, GLenum pname, GLint *params) {
        _getProgramiv(program, pname, params);
    };

    void getRenderbufferParameteriv(GLenum target, GLenum pname, GLint *params) {
        _getRenderbufferParameteriv(target, pname, params);
    };

    void getShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog) {
        _getShaderInfoLog(shader, bufSize, length, infoLog);
    };

    void getShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision) {
        _getShaderPrecisionFormat(shadertype, precisiontype, range, precision);
    };

    void getShaderSource(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source) {
        _getShaderSource(shader, bufSize, length, source);
    };

    void getShaderiv(GLuint shader, GLenum pname, GLint *params) {
        _getShaderiv(shader, pname, params);
    };

    const GLubyte *getString(GLenum name) {
        return _getString(name);
    };

    void getTexParameterfv(GLenum target, GLenum pname, GLfloat *params) {
        _getTexParameterfv(target, pname, params);
    };

    void getTexParameteriv(GLenum target, GLenum pname, GLint *params) {
        _getTexParameteriv(target, pname, params);
    };

    GLint getUniformLocation(GLuint program, const GLchar *name) {
        return _getUniformLocation(program, name);
    };

    void getUniformfv(GLuint program, GLint location, GLfloat *params) {
        _getUniformfv(program, location, params);
    };

    void getUniformiv(GLuint program, GLint location, GLint *params) {
        _getUniformiv(program, location, params);
    };

    void getVertexAttribPointerv(GLuint index, GLenum pname, void **pointer) {
        _getVertexAttribPointerv(index, pname, pointer);
    };

    void getVertexAttribfv(GLuint index, GLenum pname, GLfloat *params) {
        _getVertexAttribfv(index, pname, params);
    };

    void getVertexAttribiv(GLuint index, GLenum pname, GLint *params) {
        _getVertexAttribiv(index, pname, params);
    };

    void hint(GLenum target, GLenum mode) {
        _hint(target, mode);
    };

    GLboolean isBuffer(GLuint buffer) {
        return _isBuffer(buffer);
    };

    GLboolean isEnabled(GLenum cap) {
        return _isEnabled(cap);
    };

    GLboolean isFramebuffer(GLuint framebuffer) {
        return _isFramebuffer(framebuffer);
    };

    GLboolean isProgram(GLuint program) {
        return _isProgram(program);
    };

    GLboolean isRenderbuffer(GLuint renderbuffer) {
        return _isRenderbuffer(renderbuffer);
    };

    GLboolean isShader(GLuint shader) {
        return _isShader(shader);
    };

    GLboolean isTexture(GLuint texture) {
        return _isTexture(texture);
    };

    void lineWidth(GLfloat width) {
        _lineWidth(width);
    };

    void linkProgram(GLuint program) {
        _linkProgram(program);
    };

    void pixelStorei(GLenum pname, GLint param) {
        _pixelStorei(pname, param);
    };

    void polygonOffset(GLfloat factor, GLfloat units) {
        _polygonOffset(factor, units);
    };

    void readPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels) {
        _readPixels(x, y, width, height, format, type, pixels);
    };

    void releaseShaderCompiler() {
        _releaseShaderCompiler();
    };

    void renderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height) {
        _renderbufferStorage(target, internalformat, width, height);
    };

    void sampleCoverage(GLfloat value, GLboolean invert) {
        _sampleCoverage(value, invert);
    };

    void scissor(GLint x, GLint y, GLsizei width, GLsizei height) {
        _scissor(x, y, width, height);
    };

    void shaderBinary(GLsizei count, const GLuint *shaders, GLenum binaryformat, const void *binary, GLsizei length) {
        _shaderBinary(count, shaders, binaryformat, binary, length);
    };

    void shaderSource(GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length) {
        _shaderSource(shader, count, string, length);
    };

    void stencilFunc(GLenum func, GLint ref, GLuint mask) {
        _stencilFunc(func, ref, mask);
    };

    void stencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask) {
        _stencilFuncSeparate(face, func, ref, mask);
    };

    void stencilMask(GLuint mask) {
        _stencilMask(mask);
    };

    void stencilMaskSeparate(GLenum face, GLuint mask) {
        _stencilMaskSeparate(face, mask);
    };

    void stencilOp(GLenum fail, GLenum zfail, GLenum zpass) {
        _stencilOp(fail, zfail, zpass);
    };

    void stencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass) {
        _stencilOpSeparate(face, sfail, dpfail, dppass);
    };

    void texImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels) {
        _texImage2D(target, level, internalformat, width, height, border, format, type, pixels);
    };

    void texParameterf(GLenum target, GLenum pname, GLfloat param) {
        _texParameterf(target, pname, param);
    };

    void texParameterfv(GLenum target, GLenum pname, const GLfloat *params) {
        _texParameterfv(target, pname, params);
    };

    void texParameteri(GLenum target, GLenum pname, GLint param) {
        _texParameteri(target, pname, param);
    };

    void texParameteriv(GLenum target, GLenum pname, const GLint *params) {
        _texParameteriv(target, pname, params);
    };

    void texSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels) {
        _texSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
    };

    void uniform1f(GLint location, GLfloat v0) {
        _uniform1f(location, v0);
    };

    void uniform1fv(GLint location, GLsizei count, const GLfloat *value) {
        _uniform1fv(location, count, value);
    };

    void uniform1i(GLint location, GLint v0) {
        _uniform1i(location, v0);
    };

    void uniform1iv(GLint location, GLsizei count, const GLint *value) {
        _uniform1iv(location, count, value);
    };

    void uniform2f(GLint location, GLfloat v0, GLfloat v1) {
        _uniform2f(location, v0, v1);
    };

    void uniform2fv(GLint location, GLsizei count, const GLfloat *value) {
        _uniform2fv(location, count, value);
    };

    void uniform2i(GLint location, GLint v0, GLint v1) {
        _uniform2i(location, v0, v1);
    };

    void uniform2iv(GLint location, GLsizei count, const GLint *value) {
        _uniform2iv(location, count, value);
    };

    void uniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2) {
        _uniform3f(location, v0, v1, v2);
    };

    void uniform3fv(GLint location, GLsizei count, const GLfloat *value) {
        _uniform3fv(location, count, value);
    };

    void uniform3i(GLint location, GLint v0, GLint v1, GLint v2) {
        _uniform3i(location, v0, v1, v2);
    };

    void uniform3iv(GLint location, GLsizei count, const GLint *value) {
        _uniform3iv(location, count, value);
    };

    void uniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) {
        _uniform4f(location, v0, v1, v2, v3);
    };

    void uniform4fv(GLint location, GLsizei count, const GLfloat *value) {
        _uniform4fv(location, count, value);
    };

    void uniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3) {
        _uniform4i(location, v0, v1, v2, v3);
    };

    void uniform4iv(GLint location, GLsizei count, const GLint *value) {
        _uniform4iv(location, count, value);
    };

    void uniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
        _uniformMatrix2fv(location, count, transpose, value);
    };

    void uniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
        _uniformMatrix3fv(location, count, transpose, value);
    };

    void uniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
        _uniformMatrix4fv(location, count, transpose, value);
    };

    void useProgram(GLuint program) {
        _useProgram(program);
    };

    void validateProgram(GLuint program) {
        _validateProgram(program);
    };

    void vertexAttrib1f(GLuint index, GLfloat x) {
        _vertexAttrib1f(index, x);
    };

    void vertexAttrib1fv(GLuint index, const GLfloat *v) {
        _vertexAttrib1fv(index, v);
    };

    void vertexAttrib2f(GLuint index, GLfloat x, GLfloat y) {
        _vertexAttrib2f(index, x, y);
    };

    void vertexAttrib2fv(GLuint index, const GLfloat *v) {
        _vertexAttrib2fv(index, v);
    };

    void vertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z) {
        _vertexAttrib3f(index, x, y, z);
    };

    void vertexAttrib3fv(GLuint index, const GLfloat *v) {
        _vertexAttrib3fv(index, v);
    };

    void vertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
        _vertexAttrib4f(index, x, y, z, w);
    };

    void vertexAttrib4fv(GLuint index, const GLfloat *v) {
        _vertexAttrib4fv(index, v);
    };

    void vertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer) {
        _vertexAttribPointer(index, size, type, normalized, stride, pointer);
    };

    void viewport(GLint x, GLint y, GLsizei width, GLsizei height) {
        _viewport(x, y, width, height);
    };

}; // class Context


template<typename GetProcAddress>
Context::Context(GetProcAddress f)
{
    std::runtime_error err("getProcAddress returned nullptr");
    _activeTexture = reinterpret_cast<PFNGLACTIVETEXTUREPROC>(f("glActiveTexture"));
    if (!_activeTexture) throw err;
    _attachShader = reinterpret_cast<PFNGLATTACHSHADERPROC>(f("glAttachShader"));
    if (!_attachShader) throw err;
    _bindAttribLocation = reinterpret_cast<PFNGLBINDATTRIBLOCATIONPROC>(f("glBindAttribLocation"));
    if (!_bindAttribLocation) throw err;
    _bindBuffer = reinterpret_cast<PFNGLBINDBUFFERPROC>(f("glBindBuffer"));
    if (!_bindBuffer) throw err;
    _bindFramebuffer = reinterpret_cast<PFNGLBINDFRAMEBUFFERPROC>(f("glBindFramebuffer"));
    if (!_bindFramebuffer) throw err;
    _bindRenderbuffer = reinterpret_cast<PFNGLBINDRENDERBUFFERPROC>(f("glBindRenderbuffer"));
    if (!_bindRenderbuffer) throw err;
    _bindTexture = reinterpret_cast<PFNGLBINDTEXTUREPROC>(f("glBindTexture"));
    if (!_bindTexture) throw err;
    _blendColor = reinterpret_cast<PFNGLBLENDCOLORPROC>(f("glBlendColor"));
    if (!_blendColor) throw err;
    _blendEquation = reinterpret_cast<PFNGLBLENDEQUATIONPROC>(f("glBlendEquation"));
    if (!_blendEquation) throw err;
    _blendEquationSeparate = reinterpret_cast<PFNGLBLENDEQUATIONSEPARATEPROC>(f("glBlendEquationSeparate"));
    if (!_blendEquationSeparate) throw err;
    _blendFunc = reinterpret_cast<PFNGLBLENDFUNCPROC>(f("glBlendFunc"));
    if (!_blendFunc) throw err;
    _blendFuncSeparate = reinterpret_cast<PFNGLBLENDFUNCSEPARATEPROC>(f("glBlendFuncSeparate"));
    if (!_blendFuncSeparate) throw err;
    _bufferData = reinterpret_cast<PFNGLBUFFERDATAPROC>(f("glBufferData"));
    if (!_bufferData) throw err;
    _bufferSubData = reinterpret_cast<PFNGLBUFFERSUBDATAPROC>(f("glBufferSubData"));
    if (!_bufferSubData) throw err;
    _checkFramebufferStatus = reinterpret_cast<PFNGLCHECKFRAMEBUFFERSTATUSPROC>(f("glCheckFramebufferStatus"));
    if (!_checkFramebufferStatus) throw err;
    _clear = reinterpret_cast<PFNGLCLEARPROC>(f("glClear"));
    if (!_clear) throw err;
    _clearColor = reinterpret_cast<PFNGLCLEARCOLORPROC>(f("glClearColor"));
    if (!_clearColor) throw err;
    _clearDepthf = reinterpret_cast<PFNGLCLEARDEPTHFPROC>(f("glClearDepthf"));
    if (!_clearDepthf) throw err;
    _clearStencil = reinterpret_cast<PFNGLCLEARSTENCILPROC>(f("glClearStencil"));
    if (!_clearStencil) throw err;
    _colorMask = reinterpret_cast<PFNGLCOLORMASKPROC>(f("glColorMask"));
    if (!_colorMask) throw err;
    _compileShader = reinterpret_cast<PFNGLCOMPILESHADERPROC>(f("glCompileShader"));
    if (!_compileShader) throw err;
    _compressedTexImage2D = reinterpret_cast<PFNGLCOMPRESSEDTEXIMAGE2DPROC>(f("glCompressedTexImage2D"));
    if (!_compressedTexImage2D) throw err;
    _compressedTexSubImage2D = reinterpret_cast<PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC>(f("glCompressedTexSubImage2D"));
    if (!_compressedTexSubImage2D) throw err;
    _copyTexImage2D = reinterpret_cast<PFNGLCOPYTEXIMAGE2DPROC>(f("glCopyTexImage2D"));
    if (!_copyTexImage2D) throw err;
    _copyTexSubImage2D = reinterpret_cast<PFNGLCOPYTEXSUBIMAGE2DPROC>(f("glCopyTexSubImage2D"));
    if (!_copyTexSubImage2D) throw err;
    _createProgram = reinterpret_cast<PFNGLCREATEPROGRAMPROC>(f("glCreateProgram"));
    if (!_createProgram) throw err;
    _createShader = reinterpret_cast<PFNGLCREATESHADERPROC>(f("glCreateShader"));
    if (!_createShader) throw err;
    _cullFace = reinterpret_cast<PFNGLCULLFACEPROC>(f("glCullFace"));
    if (!_cullFace) throw err;
    _deleteBuffers = reinterpret_cast<PFNGLDELETEBUFFERSPROC>(f("glDeleteBuffers"));
    if (!_deleteBuffers) throw err;
    _deleteFramebuffers = reinterpret_cast<PFNGLDELETEFRAMEBUFFERSPROC>(f("glDeleteFramebuffers"));
    if (!_deleteFramebuffers) throw err;
    _deleteProgram = reinterpret_cast<PFNGLDELETEPROGRAMPROC>(f("glDeleteProgram"));
    if (!_deleteProgram) throw err;
    _deleteRenderbuffers = reinterpret_cast<PFNGLDELETERENDERBUFFERSPROC>(f("glDeleteRenderbuffers"));
    if (!_deleteRenderbuffers) throw err;
    _deleteShader = reinterpret_cast<PFNGLDELETESHADERPROC>(f("glDeleteShader"));
    if (!_deleteShader) throw err;
    _deleteTextures = reinterpret_cast<PFNGLDELETETEXTURESPROC>(f("glDeleteTextures"));
    if (!_deleteTextures) throw err;
    _depthFunc = reinterpret_cast<PFNGLDEPTHFUNCPROC>(f("glDepthFunc"));
    if (!_depthFunc) throw err;
    _depthMask = reinterpret_cast<PFNGLDEPTHMASKPROC>(f("glDepthMask"));
    if (!_depthMask) throw err;
    _depthRangef = reinterpret_cast<PFNGLDEPTHRANGEFPROC>(f("glDepthRangef"));
    if (!_depthRangef) throw err;
    _detachShader = reinterpret_cast<PFNGLDETACHSHADERPROC>(f("glDetachShader"));
    if (!_detachShader) throw err;
    _disable = reinterpret_cast<PFNGLDISABLEPROC>(f("glDisable"));
    if (!_disable) throw err;
    _disableVertexAttribArray = reinterpret_cast<PFNGLDISABLEVERTEXATTRIBARRAYPROC>(f("glDisableVertexAttribArray"));
    if (!_disableVertexAttribArray) throw err;
    _drawArrays = reinterpret_cast<PFNGLDRAWARRAYSPROC>(f("glDrawArrays"));
    if (!_drawArrays) throw err;
    _drawElements = reinterpret_cast<PFNGLDRAWELEMENTSPROC>(f("glDrawElements"));
    if (!_drawElements) throw err;
    _enable = reinterpret_cast<PFNGLENABLEPROC>(f("glEnable"));
    if (!_enable) throw err;
    _enableVertexAttribArray = reinterpret_cast<PFNGLENABLEVERTEXATTRIBARRAYPROC>(f("glEnableVertexAttribArray"));
    if (!_enableVertexAttribArray) throw err;
    _finish = reinterpret_cast<PFNGLFINISHPROC>(f("glFinish"));
    if (!_finish) throw err;
    _flush = reinterpret_cast<PFNGLFLUSHPROC>(f("glFlush"));
    if (!_flush) throw err;
    _framebufferRenderbuffer = reinterpret_cast<PFNGLFRAMEBUFFERRENDERBUFFERPROC>(f("glFramebufferRenderbuffer"));
    if (!_framebufferRenderbuffer) throw err;
    _framebufferTexture2D = reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE2DPROC>(f("glFramebufferTexture2D"));
    if (!_framebufferTexture2D) throw err;
    _frontFace = reinterpret_cast<PFNGLFRONTFACEPROC>(f("glFrontFace"));
    if (!_frontFace) throw err;
    _genBuffers = reinterpret_cast<PFNGLGENBUFFERSPROC>(f("glGenBuffers"));
    if (!_genBuffers) throw err;
    _genFramebuffers = reinterpret_cast<PFNGLGENFRAMEBUFFERSPROC>(f("glGenFramebuffers"));
    if (!_genFramebuffers) throw err;
    _genRenderbuffers = reinterpret_cast<PFNGLGENRENDERBUFFERSPROC>(f("glGenRenderbuffers"));
    if (!_genRenderbuffers) throw err;
    _genTextures = reinterpret_cast<PFNGLGENTEXTURESPROC>(f("glGenTextures"));
    if (!_genTextures) throw err;
    _generateMipmap = reinterpret_cast<PFNGLGENERATEMIPMAPPROC>(f("glGenerateMipmap"));
    if (!_generateMipmap) throw err;
    _getActiveAttrib = reinterpret_cast<PFNGLGETACTIVEATTRIBPROC>(f("glGetActiveAttrib"));
    if (!_getActiveAttrib) throw err;
    _getActiveUniform = reinterpret_cast<PFNGLGETACTIVEUNIFORMPROC>(f("glGetActiveUniform"));
    if (!_getActiveUniform) throw err;
    _getAttachedShaders = reinterpret_cast<PFNGLGETATTACHEDSHADERSPROC>(f("glGetAttachedShaders"));
    if (!_getAttachedShaders) throw err;
    _getAttribLocation = reinterpret_cast<PFNGLGETATTRIBLOCATIONPROC>(f("glGetAttribLocation"));
    if (!_getAttribLocation) throw err;
    _getBooleanv = reinterpret_cast<PFNGLGETBOOLEANVPROC>(f("glGetBooleanv"));
    if (!_getBooleanv) throw err;
    _getBufferParameteriv = reinterpret_cast<PFNGLGETBUFFERPARAMETERIVPROC>(f("glGetBufferParameteriv"));
    if (!_getBufferParameteriv) throw err;
    _getError = reinterpret_cast<PFNGLGETERRORPROC>(f("glGetError"));
    if (!_getError) throw err;
    _getFloatv = reinterpret_cast<PFNGLGETFLOATVPROC>(f("glGetFloatv"));
    if (!_getFloatv) throw err;
    _getFramebufferAttachmentParameteriv = reinterpret_cast<PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC>(f("glGetFramebufferAttachmentParameteriv"));
    if (!_getFramebufferAttachmentParameteriv) throw err;
    _getIntegerv = reinterpret_cast<PFNGLGETINTEGERVPROC>(f("glGetIntegerv"));
    if (!_getIntegerv) throw err;
    _getProgramInfoLog = reinterpret_cast<PFNGLGETPROGRAMINFOLOGPROC>(f("glGetProgramInfoLog"));
    if (!_getProgramInfoLog) throw err;
    _getProgramiv = reinterpret_cast<PFNGLGETPROGRAMIVPROC>(f("glGetProgramiv"));
    if (!_getProgramiv) throw err;
    _getRenderbufferParameteriv = reinterpret_cast<PFNGLGETRENDERBUFFERPARAMETERIVPROC>(f("glGetRenderbufferParameteriv"));
    if (!_getRenderbufferParameteriv) throw err;
    _getShaderInfoLog = reinterpret_cast<PFNGLGETSHADERINFOLOGPROC>(f("glGetShaderInfoLog"));
    if (!_getShaderInfoLog) throw err;
    _getShaderPrecisionFormat = reinterpret_cast<PFNGLGETSHADERPRECISIONFORMATPROC>(f("glGetShaderPrecisionFormat"));
    if (!_getShaderPrecisionFormat) throw err;
    _getShaderSource = reinterpret_cast<PFNGLGETSHADERSOURCEPROC>(f("glGetShaderSource"));
    if (!_getShaderSource) throw err;
    _getShaderiv = reinterpret_cast<PFNGLGETSHADERIVPROC>(f("glGetShaderiv"));
    if (!_getShaderiv) throw err;
    _getString = reinterpret_cast<PFNGLGETSTRINGPROC>(f("glGetString"));
    if (!_getString) throw err;
    _getTexParameterfv = reinterpret_cast<PFNGLGETTEXPARAMETERFVPROC>(f("glGetTexParameterfv"));
    if (!_getTexParameterfv) throw err;
    _getTexParameteriv = reinterpret_cast<PFNGLGETTEXPARAMETERIVPROC>(f("glGetTexParameteriv"));
    if (!_getTexParameteriv) throw err;
    _getUniformLocation = reinterpret_cast<PFNGLGETUNIFORMLOCATIONPROC>(f("glGetUniformLocation"));
    if (!_getUniformLocation) throw err;
    _getUniformfv = reinterpret_cast<PFNGLGETUNIFORMFVPROC>(f("glGetUniformfv"));
    if (!_getUniformfv) throw err;
    _getUniformiv = reinterpret_cast<PFNGLGETUNIFORMIVPROC>(f("glGetUniformiv"));
    if (!_getUniformiv) throw err;
    _getVertexAttribPointerv = reinterpret_cast<PFNGLGETVERTEXATTRIBPOINTERVPROC>(f("glGetVertexAttribPointerv"));
    if (!_getVertexAttribPointerv) throw err;
    _getVertexAttribfv = reinterpret_cast<PFNGLGETVERTEXATTRIBFVPROC>(f("glGetVertexAttribfv"));
    if (!_getVertexAttribfv) throw err;
    _getVertexAttribiv = reinterpret_cast<PFNGLGETVERTEXATTRIBIVPROC>(f("glGetVertexAttribiv"));
    if (!_getVertexAttribiv) throw err;
    _hint = reinterpret_cast<PFNGLHINTPROC>(f("glHint"));
    if (!_hint) throw err;
    _isBuffer = reinterpret_cast<PFNGLISBUFFERPROC>(f("glIsBuffer"));
    if (!_isBuffer) throw err;
    _isEnabled = reinterpret_cast<PFNGLISENABLEDPROC>(f("glIsEnabled"));
    if (!_isEnabled) throw err;
    _isFramebuffer = reinterpret_cast<PFNGLISFRAMEBUFFERPROC>(f("glIsFramebuffer"));
    if (!_isFramebuffer) throw err;
    _isProgram = reinterpret_cast<PFNGLISPROGRAMPROC>(f("glIsProgram"));
    if (!_isProgram) throw err;
    _isRenderbuffer = reinterpret_cast<PFNGLISRENDERBUFFERPROC>(f("glIsRenderbuffer"));
    if (!_isRenderbuffer) throw err;
    _isShader = reinterpret_cast<PFNGLISSHADERPROC>(f("glIsShader"));
    if (!_isShader) throw err;
    _isTexture = reinterpret_cast<PFNGLISTEXTUREPROC>(f("glIsTexture"));
    if (!_isTexture) throw err;
    _lineWidth = reinterpret_cast<PFNGLLINEWIDTHPROC>(f("glLineWidth"));
    if (!_lineWidth) throw err;
    _linkProgram = reinterpret_cast<PFNGLLINKPROGRAMPROC>(f("glLinkProgram"));
    if (!_linkProgram) throw err;
    _pixelStorei = reinterpret_cast<PFNGLPIXELSTOREIPROC>(f("glPixelStorei"));
    if (!_pixelStorei) throw err;
    _polygonOffset = reinterpret_cast<PFNGLPOLYGONOFFSETPROC>(f("glPolygonOffset"));
    if (!_polygonOffset) throw err;
    _readPixels = reinterpret_cast<PFNGLREADPIXELSPROC>(f("glReadPixels"));
    if (!_readPixels) throw err;
    _releaseShaderCompiler = reinterpret_cast<PFNGLRELEASESHADERCOMPILERPROC>(f("glReleaseShaderCompiler"));
    if (!_releaseShaderCompiler) throw err;
    _renderbufferStorage = reinterpret_cast<PFNGLRENDERBUFFERSTORAGEPROC>(f("glRenderbufferStorage"));
    if (!_renderbufferStorage) throw err;
    _sampleCoverage = reinterpret_cast<PFNGLSAMPLECOVERAGEPROC>(f("glSampleCoverage"));
    if (!_sampleCoverage) throw err;
    _scissor = reinterpret_cast<PFNGLSCISSORPROC>(f("glScissor"));
    if (!_scissor) throw err;
    _shaderBinary = reinterpret_cast<PFNGLSHADERBINARYPROC>(f("glShaderBinary"));
    if (!_shaderBinary) throw err;
    _shaderSource = reinterpret_cast<PFNGLSHADERSOURCEPROC>(f("glShaderSource"));
    if (!_shaderSource) throw err;
    _stencilFunc = reinterpret_cast<PFNGLSTENCILFUNCPROC>(f("glStencilFunc"));
    if (!_stencilFunc) throw err;
    _stencilFuncSeparate = reinterpret_cast<PFNGLSTENCILFUNCSEPARATEPROC>(f("glStencilFuncSeparate"));
    if (!_stencilFuncSeparate) throw err;
    _stencilMask = reinterpret_cast<PFNGLSTENCILMASKPROC>(f("glStencilMask"));
    if (!_stencilMask) throw err;
    _stencilMaskSeparate = reinterpret_cast<PFNGLSTENCILMASKSEPARATEPROC>(f("glStencilMaskSeparate"));
    if (!_stencilMaskSeparate) throw err;
    _stencilOp = reinterpret_cast<PFNGLSTENCILOPPROC>(f("glStencilOp"));
    if (!_stencilOp) throw err;
    _stencilOpSeparate = reinterpret_cast<PFNGLSTENCILOPSEPARATEPROC>(f("glStencilOpSeparate"));
    if (!_stencilOpSeparate) throw err;
    _texImage2D = reinterpret_cast<PFNGLTEXIMAGE2DPROC>(f("glTexImage2D"));
    if (!_texImage2D) throw err;
    _texParameterf = reinterpret_cast<PFNGLTEXPARAMETERFPROC>(f("glTexParameterf"));
    if (!_texParameterf) throw err;
    _texParameterfv = reinterpret_cast<PFNGLTEXPARAMETERFVPROC>(f("glTexParameterfv"));
    if (!_texParameterfv) throw err;
    _texParameteri = reinterpret_cast<PFNGLTEXPARAMETERIPROC>(f("glTexParameteri"));
    if (!_texParameteri) throw err;
    _texParameteriv = reinterpret_cast<PFNGLTEXPARAMETERIVPROC>(f("glTexParameteriv"));
    if (!_texParameteriv) throw err;
    _texSubImage2D = reinterpret_cast<PFNGLTEXSUBIMAGE2DPROC>(f("glTexSubImage2D"));
    if (!_texSubImage2D) throw err;
    _uniform1f = reinterpret_cast<PFNGLUNIFORM1FPROC>(f("glUniform1f"));
    if (!_uniform1f) throw err;
    _uniform1fv = reinterpret_cast<PFNGLUNIFORM1FVPROC>(f("glUniform1fv"));
    if (!_uniform1fv) throw err;
    _uniform1i = reinterpret_cast<PFNGLUNIFORM1IPROC>(f("glUniform1i"));
    if (!_uniform1i) throw err;
    _uniform1iv = reinterpret_cast<PFNGLUNIFORM1IVPROC>(f("glUniform1iv"));
    if (!_uniform1iv) throw err;
    _uniform2f = reinterpret_cast<PFNGLUNIFORM2FPROC>(f("glUniform2f"));
    if (!_uniform2f) throw err;
    _uniform2fv = reinterpret_cast<PFNGLUNIFORM2FVPROC>(f("glUniform2fv"));
    if (!_uniform2fv) throw err;
    _uniform2i = reinterpret_cast<PFNGLUNIFORM2IPROC>(f("glUniform2i"));
    if (!_uniform2i) throw err;
    _uniform2iv = reinterpret_cast<PFNGLUNIFORM2IVPROC>(f("glUniform2iv"));
    if (!_uniform2iv) throw err;
    _uniform3f = reinterpret_cast<PFNGLUNIFORM3FPROC>(f("glUniform3f"));
    if (!_uniform3f) throw err;
    _uniform3fv = reinterpret_cast<PFNGLUNIFORM3FVPROC>(f("glUniform3fv"));
    if (!_uniform3fv) throw err;
    _uniform3i = reinterpret_cast<PFNGLUNIFORM3IPROC>(f("glUniform3i"));
    if (!_uniform3i) throw err;
    _uniform3iv = reinterpret_cast<PFNGLUNIFORM3IVPROC>(f("glUniform3iv"));
    if (!_uniform3iv) throw err;
    _uniform4f = reinterpret_cast<PFNGLUNIFORM4FPROC>(f("glUniform4f"));
    if (!_uniform4f) throw err;
    _uniform4fv = reinterpret_cast<PFNGLUNIFORM4FVPROC>(f("glUniform4fv"));
    if (!_uniform4fv) throw err;
    _uniform4i = reinterpret_cast<PFNGLUNIFORM4IPROC>(f("glUniform4i"));
    if (!_uniform4i) throw err;
    _uniform4iv = reinterpret_cast<PFNGLUNIFORM4IVPROC>(f("glUniform4iv"));
    if (!_uniform4iv) throw err;
    _uniformMatrix2fv = reinterpret_cast<PFNGLUNIFORMMATRIX2FVPROC>(f("glUniformMatrix2fv"));
    if (!_uniformMatrix2fv) throw err;
    _uniformMatrix3fv = reinterpret_cast<PFNGLUNIFORMMATRIX3FVPROC>(f("glUniformMatrix3fv"));
    if (!_uniformMatrix3fv) throw err;
    _uniformMatrix4fv = reinterpret_cast<PFNGLUNIFORMMATRIX4FVPROC>(f("glUniformMatrix4fv"));
    if (!_uniformMatrix4fv) throw err;
    _useProgram = reinterpret_cast<PFNGLUSEPROGRAMPROC>(f("glUseProgram"));
    if (!_useProgram) throw err;
    _validateProgram = reinterpret_cast<PFNGLVALIDATEPROGRAMPROC>(f("glValidateProgram"));
    if (!_validateProgram) throw err;
    _vertexAttrib1f = reinterpret_cast<PFNGLVERTEXATTRIB1FPROC>(f("glVertexAttrib1f"));
    if (!_vertexAttrib1f) throw err;
    _vertexAttrib1fv = reinterpret_cast<PFNGLVERTEXATTRIB1FVPROC>(f("glVertexAttrib1fv"));
    if (!_vertexAttrib1fv) throw err;
    _vertexAttrib2f = reinterpret_cast<PFNGLVERTEXATTRIB2FPROC>(f("glVertexAttrib2f"));
    if (!_vertexAttrib2f) throw err;
    _vertexAttrib2fv = reinterpret_cast<PFNGLVERTEXATTRIB2FVPROC>(f("glVertexAttrib2fv"));
    if (!_vertexAttrib2fv) throw err;
    _vertexAttrib3f = reinterpret_cast<PFNGLVERTEXATTRIB3FPROC>(f("glVertexAttrib3f"));
    if (!_vertexAttrib3f) throw err;
    _vertexAttrib3fv = reinterpret_cast<PFNGLVERTEXATTRIB3FVPROC>(f("glVertexAttrib3fv"));
    if (!_vertexAttrib3fv) throw err;
    _vertexAttrib4f = reinterpret_cast<PFNGLVERTEXATTRIB4FPROC>(f("glVertexAttrib4f"));
    if (!_vertexAttrib4f) throw err;
    _vertexAttrib4fv = reinterpret_cast<PFNGLVERTEXATTRIB4FVPROC>(f("glVertexAttrib4fv"));
    if (!_vertexAttrib4fv) throw err;
    _vertexAttribPointer = reinterpret_cast<PFNGLVERTEXATTRIBPOINTERPROC>(f("glVertexAttribPointer"));
    if (!_vertexAttribPointer) throw err;
    _viewport = reinterpret_cast<PFNGLVIEWPORTPROC>(f("glViewport"));
    if (!_viewport) throw err;
}


////////////////////////////////////////////////////////////////////////////


/// Readonly view of a Map (sorted associative container)
template<class Map>
class MapView {
    Map& m;
public:
    using key_type = typename Map::key_type;
    using mapped_type = typename Map::mapped_type;
    using value_type = typename Map::value_type;
    using size_type = typename Map::size_type;
    using difference_type = typename Map::difference_type;
    using key_compare = typename Map::key_compare;
    using allocator_type = typename Map::allocator_type;
    using reference = typename Map::reference;
    using const_reference = typename Map::const_reference;
    using pointer = typename Map::pointer;
    using const_pointer = typename Map::const_pointer;
    using iterator = typename Map::iterator;
    using const_iterator = typename Map::const_iterator;
    using reverse_iterator = typename Map::reverse_iterator;
    using const_reverse_iterator = typename Map::const_reverse_iterator;
    using value_compare = typename Map::value_compare;

    MapView(Map& _m) : m(_m) {};
    MapView(const MapView&) = delete;
    MapView(MapView&&) = default;

    mapped_type& at(const key_type& key) { return m.at(key); };
    const mapped_type& at(const key_type& key) const { return m.at(key); };
    iterator begin() { return m.begin(); };
    const_iterator begin() const { return m.begin(); };
    const_iterator cbegin() const { return m.cbegin(); };
    iterator end() { return m.end(); };
    const_iterator end() const { return m.end(); };
    const_iterator cend() const { return m.cend(); };
    reverse_iterator rbegin() { return m.rbegin(); };
    const_reverse_iterator rbegin() const { return m.rbegin(); };
    const_reverse_iterator crbegin() const { return m.crbegin(); };
    reverse_iterator rend() { return m.rend(); };
    const_reverse_iterator rend() const { return m.rend(); };
    const_reverse_iterator crend() const { return m.crend(); };
    bool empty() const { return m.empty(); };
    size_type size() const { return m.size(); };
    size_type max_size() const { return m.max_size(); };
    size_type count(const key_type& key) const { return m.count(key); };
    iterator find(const key_type& key) { return m.find(key); };
    const_iterator find(const key_type& key) const { return m.find(key); };
    std::pair<iterator,iterator> equal_range(const key_type& key) { return m.equal_range(key); };
    std::pair<const_iterator,const_iterator> equal_range(const key_type& key) const { return m.equal_range(key); };
    iterator lower_bound(const key_type& key) { return m.lower_bound(key); };
    const_iterator lower_bound(const key_type& key) const { return m.lower_bound(key); };
    iterator upper_bound(const key_type& key) { return m.upper_bound(key); };
    const_iterator upper_bound(const key_type& key) const { return m.upper_bound(key); };
};


class GLError : public std::runtime_error {
public:
    explicit GLError(const std::string& what_arg) : std::runtime_error(what_arg) {};
    explicit GLError(const char* what_arg) : std::runtime_error(what_arg) {};
    virtual ~GLError() {};
};


template<typename T> struct Type2Enum {};
template<> struct Type2Enum<GLfloat> { enum : GLenum { value = GL_FLOAT }; };
template<> struct Type2Enum<GLfixed> { enum : GLenum { value = GL_FIXED }; };
template<> struct Type2Enum<GLshort> { enum : GLenum { value = GL_SHORT }; };
template<> struct Type2Enum<GLushort> { enum : GLenum { value = GL_UNSIGNED_SHORT }; };
template<> struct Type2Enum<GLbyte> { enum : GLenum { value = GL_BYTE }; };
template<> struct Type2Enum<GLubyte> { enum : GLenum { value = GL_UNSIGNED_BYTE }; };


//////////////////////////////////////////////////////////////////////////


enum class BufferUsage : GLenum {
    STREAM_DRAW = 0x88E0,
    STATIC_DRAW = 0x88E4,
    DYNAMIC_DRAW = 0x88E8
};


std::string to_string(BufferUsage value)
{
    switch(value) {
        case BufferUsage::STREAM_DRAW: return "BufferUsage::STREAM_DRAW";
        case BufferUsage::STATIC_DRAW: return "BufferUsage::STATIC_DRAW";
        case BufferUsage::DYNAMIC_DRAW: return "BufferUsage::DYNAMIC_DRAW";
        default: throw std::invalid_argument("Invalid BufferUsage argument");
    }
}


template<GLenum GT, typename T, size_t N=1>
class Buffer {
    static_assert(std::is_standard_layout<T>::value, "T must be standard layout");

    Context& gl;

protected:
    std::array<GLuint, N> buffers;
    size_t currentBuffer;

public:
    explicit Buffer(Context& ctx) : gl(ctx), currentBuffer(N-1) {
        buffers.fill(0);
    };

    Buffer(const Buffer&) = delete;

    Buffer(Buffer&& other) : gl(other.gl), buffers(std::move(other.buffers)), currentBuffer(std::move(other.currentBuffer)) { };

    virtual ~Buffer() {
        gl.deleteBuffers(N, buffers.data());
    };

    void bindBuffer() {
        gl.bindBuffer(GT, buffers[currentBuffer]);
    };

    void setBufferData(size_t size, const T* data, BufferUsage usage=BufferUsage::STATIC_DRAW) {
        size_t nextBuffer = (currentBuffer + 1) % buffers.size();
        if (buffers[nextBuffer] == 0) {
            gl.genBuffers(1, &buffers[nextBuffer]);
            if (buffers[nextBuffer] == 0)
                throw GLError("glGenBuffers failed");
        }
        currentBuffer = nextBuffer;
        bindBuffer();
        gl.bufferData(GT, size, data, static_cast<GLenum>(usage));
    };

    size_t getBufferSize() {
        GLint out {-1};
        bindBuffer();
        gl.getBufferParameteriv(GT, GL_BUFFER_SIZE, &out);
        if (out < 0) throw GLError("glGetBufferParameteriv failed");
        return static_cast<size_t>(out);
    };

    BufferUsage getBufferUsage() {
        GLint out {-1};
        bindBuffer();
        gl.getBufferParameteriv(GT, GL_BUFFER_USAGE, &out);
        if (out < 0) throw GLError("glGetBufferParameteriv failed");
        return static_cast<BufferUsage>(out);
    };
};


template<GLenum GT, typename T, size_t N, class U>
void setBufferData(Buffer<GT, T, N>& buf, const U& data, BufferUsage usage=BufferUsage::STATIC_DRAW)
{
    // Copy into temporary contigious buffer
    const size_t size = data.size();
    std::unique_ptr<T> elems {new T[size]};
    copy(begin(data), end(data), elems.get());
    buf.setBufferData(sizeof(T[size]), elems.get(), usage);
}


// Specialization for std::array container (guaranteed to be contigious)
template<GLenum GT, typename T, size_t N1, size_t N2>
void setBufferData(Buffer<GT, T, N1>& buf, const std::array<T, N2>& data, BufferUsage usage=BufferUsage::STATIC_DRAW)
{
    const size_t size {data.size()};
    buf.setBufferData(sizeof(T[size]), data.data(), usage);
}


// Specialization for std::vector container (guaranteed to be contigious)
template<GLenum GT, typename T, size_t N>
void setBufferData(Buffer<GT, T, N>& buf, const std::vector<T>& data, BufferUsage usage=BufferUsage::STATIC_DRAW)
{
    const size_t size {data.size()};
    buf.setBufferData(sizeof(T[size]), data.data(), usage);
}


template<typename T, size_t N=1>
using VertexBuffer = Buffer<GL_ARRAY_BUFFER, T, N>;


template<class U, size_t N=1>
VertexBuffer<typename U::value_type, N> makeVertexBuffer(Context& ctx, const U& data, BufferUsage usage=BufferUsage::STATIC_DRAW)
{
    VertexBuffer<typename U::value_type, N> out(ctx);
    setBufferData(out, data, usage);
    return out;
}


template<typename T, size_t N=1>
using ElementBuffer = Buffer<GL_ELEMENT_ARRAY_BUFFER, T, N>;


template<typename U, size_t N=1>
ElementBuffer<typename U::value_type, N> makeElementBuffer(Context& ctx, const U& data, BufferUsage usage=BufferUsage::STATIC_DRAW)
{
    ElementBuffer<typename U::value_type, N> out(ctx);
    setBufferData(out, data, usage);
    return out;
}


//////////////////////////////////////////////////////////////////////////


class Program {
    Context& gl;

public:

    class VertexAttrib {
        friend class Program;

        Program& program;
        GLuint index;
        GLint size;
        GLenum type;
        GLint bufferLen {-1};

        VertexAttrib(Program& p) : program(p) {};
        VertexAttrib(const VertexAttrib&) = default;

    public:

        VertexAttrib(VertexAttrib&&) = default;

        const GLint& getSize() const { return size; };

        const GLenum& getType() const { return type; };

        template<class T, size_t N=1>
        void vertexAttribPointer(size_t index, VertexBuffer<T, N>& vbo, GLint size, GLenum type, bool normalized, GLsizei stride, size_t offset) {
            if (index > this->size) throw std::invalid_argument("Index overflow");
            if (size <= 0 || size > 4) throw std::invalid_argument("Invalid size");
            vbo.bindBuffer();
            program.gl.vertexAttribPointer(this->index + index, size, type, normalized ? GL_TRUE : GL_FALSE, stride, reinterpret_cast<void*>(offset));
            program.gl.enableVertexAttribArray(index);
            // Calculate number of elements in VertexBuffer
            bufferLen = vbo.getBufferSize() / sizeof(T);
        };
    };

    class Uniform {
        friend class Program;

        Program& program;
        GLint loc;
        GLint size;
        GLenum type;
        /// Texture unit assignment
        GLenum textureUnit;

        Uniform(Program& p) : program(p) {};
        Uniform(const Uniform&) = default;

    public:

        Uniform(Uniform&&) = default;

        const GLint& getSize() const { return size; };

        const GLenum& getType() const { return type; };

        void uniform1f(GLfloat v0) {
            program.useProgram();
            program.gl.uniform1f(loc, v0);
        };

        void uniform2f(GLfloat v0, GLfloat v1) {
            program.useProgram();
            program.gl.uniform2f(loc, v0, v1);
        };

        void uniform3f(GLfloat v0, GLfloat v1, GLfloat v2) {
            program.useProgram();
            program.gl.uniform3f(loc, v0, v1, v2);
        };

        void uniform4f(GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) {
            program.useProgram();
            program.gl.uniform4f(loc, v0, v1, v2, v3);
        };

        void uniform1fv(GLsizei count, const GLfloat* value) {
            program.useProgram();
            program.gl.uniform1fv(loc, count, value);
        };

        void uniform2fv(GLsizei count, const GLfloat* value) {
            program.useProgram();
            program.gl.uniform2fv(loc, count, value);
        };

        void uniform3fv(GLsizei count, const GLfloat* value) {
            program.useProgram();
            program.gl.uniform3fv(loc, count, value);
        };

        void uniform4fv(GLsizei count, const GLfloat* value) {
            program.useProgram();
            program.gl.uniform4fv(loc, count, value);
        };
    };

    using VertexAttribMap = std::map<std::string, VertexAttrib>;
    using VertexAttribMapView = MapView<VertexAttribMap>;

    using UniformMap = std::map<std::string, Uniform>;
    using UniformMapView = MapView<UniformMap>;

protected:

    GLuint vert, frag, prog;

    VertexAttribMap _vertexAttribs;

    UniformMap _uniforms;

    void loadUniforms();

    void loadVertexAttribs();

public:

    VertexAttribMapView vertexAttribs;

    UniformMapView uniforms;

    explicit Program(Context& ctx);

    explicit Program(Context& ctx, const std::string& vertSrc, const std::string& fragSrc) : Program(ctx) {
        compileVert(vertSrc);
        compileFrag(fragSrc);
        link();
    };

    Program(const Program&) = delete;

    Program(Program&& other) : gl(other.gl), vert(std::move(other.vert)), frag(std::move(other.frag)), prog(std::move(other.prog)), vertexAttribs(std::move(other.vertexAttribs)), uniforms(std::move(other.uniforms)) { };

    virtual ~Program() {
        gl.deleteProgram(prog);
        gl.deleteShader(frag);
        gl.deleteShader(vert);
    };

    void compileVert(const std::string& src);

    void compileFrag(const std::string& src);

    void link();

    void useProgram() { gl.useProgram(prog); };

    /// Returns the maximum value of `count` that can be used
    /// in drawArrays
    GLsizei getMaxArrayCount() const {
        GLsizei count {-1};
        for (auto it = _vertexAttribs.begin(); it != _vertexAttribs.end(); ++it) {
            const VertexAttrib& va = (*it).second;
            if (va.bufferLen < 0) continue;
            else if (count < 0) count = va.bufferLen;
            else count = std::min(count, va.bufferLen);
        }
        return count;
    };

    void drawArrays(GLenum mode, GLint first, GLsizei count) {
        if (first < 0 || count < 0) throw std::invalid_argument("out of range");
        useProgram();
        GLsizei maxCount = getMaxArrayCount() - first;
        if (maxCount < 0 || count > maxCount) throw std::invalid_argument("out of range");
        gl.drawArrays(mode, first, count);
    };

    void drawArrays(GLenum mode) {
        useProgram();
        gl.drawArrays(mode, 0, getMaxArrayCount());
    };

    template<typename T, size_t N>
    void drawElements(ElementBuffer<T, N>& ibo, GLenum mode, GLsizei count, size_t offset) {
        if (count < 0) throw std::invalid_argument("out of range");
        useProgram();
        ibo.bindBuffer();
        GLint maxCount = (ibo.getBufferSize() / sizeof(T)) - offset;
        if (maxCount < 0 || count > maxCount) throw std::invalid_argument("out of range");
        gl.drawElements(mode, count, Type2Enum<T>::value, reinterpret_cast<void*>(offset));
    };

    template<typename T, size_t N>
    void drawElements(ElementBuffer<T, N>& ibo, GLenum mode) {
        useProgram();
        ibo.bindBuffer();
        GLint maxCount = (ibo.getBufferSize() / sizeof(T));
        gl.drawElements(mode, maxCount, Type2Enum<T>::value, reinterpret_cast<void*>(0));
    };
};


inline
Program::Program(Context& ctx) : gl(ctx), vertexAttribs(_vertexAttribs), uniforms(_uniforms) {
    vert = gl.createShader(GL_VERTEX_SHADER);
    if (!vert) throw GLError("Failed to create vertex shader");
    frag = gl.createShader(GL_FRAGMENT_SHADER);
    if (!frag) {
        gl.deleteShader(vert);
        throw GLError("Failed to create fragment shader");
    }
    prog = gl.createProgram();
    if (!prog) {
        gl.deleteShader(frag);
        gl.deleteShader(vert);
        throw GLError("Failed to create program");
    }
}


inline
void Program::compileVert(const std::string& src) {
    GLint size = src.size();
    const GLchar* str[] = {src.c_str()};
    GLint compiled;
    gl.shaderSource(vert, 1, str, &size);
    gl.compileShader(vert);
    gl.getShaderiv(vert, GL_COMPILE_STATUS, &compiled);
    if (!compiled) {
        GLint infoLen {0};
        gl.getShaderiv(vert, GL_INFO_LOG_LENGTH, &infoLen);
        if (infoLen > 1) {
            std::unique_ptr<char> infoLog {new char[infoLen]};
            gl.getShaderInfoLog(vert, infoLen, NULL, infoLog.get());
            throw std::invalid_argument(infoLog.get());
        }
        throw std::invalid_argument("");
    }
}


/// Compile fragment shader of program
inline
void Program::compileFrag(const std::string& src) {
    GLint size = src.size();
    const GLchar* str[] = {src.c_str()};
    GLint compiled;
    gl.shaderSource(frag, 1, str, &size);
    gl.compileShader(frag);
    gl.getShaderiv(frag, GL_COMPILE_STATUS, &compiled);
    if (!compiled) {
        GLint infoLen {0};
        gl.getShaderiv(frag, GL_INFO_LOG_LENGTH, &infoLen);
        if (infoLen > 1) {
            std::unique_ptr<char> infoLog {new char[infoLen]};
            gl.getShaderInfoLog(frag, infoLen, NULL, infoLog.get());
            throw std::invalid_argument(infoLog.get());
        }
        throw std::invalid_argument("");
    }
}


inline
void Program::link() {
    GLint linked;
    gl.attachShader(prog, vert);
    gl.attachShader(prog, frag);
    gl.linkProgram(prog);
    gl.getProgramiv(prog, GL_LINK_STATUS, &linked);
    if (!linked) {
        GLint infoLen {0};
        gl.getProgramiv(prog, GL_INFO_LOG_LENGTH, &infoLen);
        if (infoLen > 1) {
            std::unique_ptr<char> infoLog {new char[infoLen]};
            gl.getProgramInfoLog(prog, infoLen, NULL, infoLog.get());
            throw std::invalid_argument(infoLog.get());
        }
        throw std::invalid_argument("");
    }
    loadUniforms();
    loadVertexAttribs();
}


inline
void Program::loadUniforms() {
    GLint numUniforms {0};
    GLint bufSize {0};
    _uniforms.clear();
    gl.getProgramiv(prog, GL_ACTIVE_UNIFORMS, &numUniforms);
    gl.getProgramiv(prog, GL_ACTIVE_UNIFORM_MAX_LENGTH, &bufSize);
    std::unique_ptr<char> nameBuf {new char[bufSize]};
    GLenum textureUnit = GL_TEXTURE0;
    for (int i = 0; i < numUniforms; ++i) {
        Uniform info(*this);
        gl.getActiveUniform(prog, i, bufSize, NULL, &info.size, &info.type, nameBuf.get());
        info.loc = gl.getUniformLocation(prog, nameBuf.get());
        if (info.type == GL_SAMPLER_2D || info.type == GL_SAMPLER_CUBE) {
            if (textureUnit > GL_TEXTURE31) throw std::invalid_argument("Too many texture samplers");
            info.textureUnit = textureUnit++;
        } else {
            info.textureUnit = 0;
        }
        auto infopair = std::make_pair(std::string(nameBuf.get()), std::move(info));
        _uniforms.insert(std::move(infopair));
    }
}


inline
void Program::loadVertexAttribs() {
    GLint numAttribs {0};
    GLint bufSize {0};
    _vertexAttribs.clear();
    gl.getProgramiv(prog, GL_ACTIVE_ATTRIBUTES, &numAttribs);
    gl.getProgramiv(prog, GL_ACTIVE_ATTRIBUTE_MAX_LENGTH, &bufSize);
    std::unique_ptr<char> nameBuf {new char[bufSize]};
    for (int i = 0; i < numAttribs; ++i) {
        VertexAttrib info(*this);
        gl.getActiveAttrib(prog, i, bufSize, NULL, &info.size, &info.type, nameBuf.get());
        info.index = gl.getAttribLocation(prog, nameBuf.get());
        auto infopair = std::make_pair(std::string(nameBuf.get()), std::move(info));
        _vertexAttribs.insert(std::move(infopair));
    }
};


inline
Program makeProgram(Context& ctx)
{
    return Program(ctx);
}


inline
Program makeProgram(Context& ctx, const std::string& vertSrc, const std::string& fragSrc)
{
    return Program(ctx, vertSrc, fragSrc);
}


/// uniform(Program::Uniform, Value)
/// Sets the value of a uniform


inline
void setUniform(Program::Uniform& u, const std::array<GLfloat, 1>& v)
{
    u.uniform1fv(1, v.data());
}


inline
void setUniform(Program::Uniform& u, const GLfloat& v0)
{
    u.uniform1f(v0);
}


inline
void setUniform(Program::Uniform& u, const std::array<GLfloat, 2>& v)
{
    u.uniform2fv(1, v.data());
}


inline
void setUniform(Program::Uniform& u, const GLfloat& v0, const GLfloat& v1)
{
    u.uniform2f(v0, v1);
}


inline
void setUniform(Program::Uniform& u, const std::array<GLfloat, 3>& v)
{
    u.uniform3fv(1, v.data());
}


inline
void setUniform(Program::Uniform& u, const GLfloat& v0, const GLfloat& v1, const GLfloat& v2)
{
    u.uniform3f(v0, v1, v2);
}


inline
void setUniform(Program::Uniform& u, const std::array<GLfloat, 4>& v)
{
    u.uniform4fv(1, v.data());
}


inline
void setUniform(Program::Uniform& u, const GLfloat& v0, const GLfloat& v1, const GLfloat& v2, const GLfloat& v3)
{
    u.uniform4f(v0, v1, v2, v3);
}


template<size_t N>
void setUniform(Program::Uniform& u, const std::array<std::array<GLfloat, 1>, N>& v)
{
    u.uniform1fv(N, v[0].data());
}


template<size_t N>
void setUniform(Program::Uniform& u, const std::array<std::array<GLfloat, 2>, N>& v)
{
    u.uniform2fv(N, v[0].data());
}


template<size_t N>
void setUniform(Program::Uniform& u, const std::array<std::array<GLfloat, 3>, N>& v)
{
    u.uniform3fv(N, v[0].data());
}


template<size_t N>
void setUniform(Program::Uniform& u, const std::array<std::array<GLfloat, 4>, N>& v)
{
    u.uniform4fv(N, v[0].data());
}


template<typename... Args>
void setUniform(Program& prog, const std::string& name, const Args&... args)
{
    setUniform(prog.uniforms.at(name), args...);
}


// type, size and offset is unknown.
template<class T, size_t N>
void setVertexAttribArray(Program::VertexAttrib& va, size_t index, VertexBuffer<T, N>& vbo, GLenum type, GLint size, size_t offset=0, bool normalized=false)
{
    // TODO: Check for invalid type
    va.vertexAttribPointer(index, vbo, size, type, normalized, sizeof(T), offset);
}


/// Specialization for std::array
template<class T, size_t N1, size_t N2>
void setVertexAttribArray(Program::VertexAttrib& va, size_t index, VertexBuffer<std::array<T,N2>,N1>& vbo, bool normalized=false)
{
    va.vertexAttribPointer(index, vbo, N2, Type2Enum<T>::value, normalized, sizeof(std::array<T,N2>), 0);
}


/// Convenience for when first argument is Program
template<class T, size_t N, typename... Args>
void setVertexAttribArray(Program& prog, const std::string& vertexAttribName, size_t index, VertexBuffer<T, N>& vbo, const Args&... args)
{
    return setVertexAttribArray(prog.vertexAttribs.at(vertexAttribName), index, vbo, args...);
}


void drawArrays(Program& prog, GLenum mode)
{
    prog.drawArrays(mode);
}


template<typename T, size_t N>
void drawElements(Program& prog, ElementBuffer<T, N>& ibo, GLenum mode)
{
    prog.drawElements(ibo, mode);
}


} // namespace gles20
} // namespace pyk
#endif
