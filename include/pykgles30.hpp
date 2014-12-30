#ifndef _PYKGLES30_
#define _PYKGLES30_
#include <stdexcept>
#include <pykgles20.hpp>

namespace pyk {
namespace gles30 {

namespace types {
using namespace gles20::types;
typedef unsigned short GLhalf;
} // namespace types

namespace enums {
using namespace gles20::enums;
enum {
    GL_SYNC_FLUSH_COMMANDS_BIT = 0x00000001,
    GL_MAP_READ_BIT = 0x0001,
    GL_MAP_WRITE_BIT = 0x0002,
    GL_MAP_INVALIDATE_RANGE_BIT = 0x0004,
    GL_MAP_INVALIDATE_BUFFER_BIT = 0x0008,
    GL_MAP_FLUSH_EXPLICIT_BIT = 0x0010,
    GL_MAP_UNSYNCHRONIZED_BIT = 0x0020,
    GL_READ_BUFFER = 0x0C02,
    GL_UNPACK_ROW_LENGTH = 0x0CF2,
    GL_UNPACK_SKIP_ROWS = 0x0CF3,
    GL_UNPACK_SKIP_PIXELS = 0x0CF4,
    GL_PACK_ROW_LENGTH = 0x0D02,
    GL_PACK_SKIP_ROWS = 0x0D03,
    GL_PACK_SKIP_PIXELS = 0x0D04,
    GL_HALF_FLOAT = 0x140B,
    GL_COLOR = 0x1800,
    GL_DEPTH = 0x1801,
    GL_STENCIL = 0x1802,
    GL_RED = 0x1903,
    GL_GREEN = 0x1904,
    GL_BLUE = 0x1905,
    GL_MIN = 0x8007,
    GL_MAX = 0x8008,
    GL_RGB8 = 0x8051,
    GL_RGBA8 = 0x8058,
    GL_RGB10_A2 = 0x8059,
    GL_TEXTURE_BINDING_3D = 0x806A,
    GL_UNPACK_SKIP_IMAGES = 0x806D,
    GL_UNPACK_IMAGE_HEIGHT = 0x806E,
    GL_TEXTURE_3D = 0x806F,
    GL_TEXTURE_WRAP_R = 0x8072,
    GL_MAX_3D_TEXTURE_SIZE = 0x8073,
    GL_MAX_ELEMENTS_VERTICES = 0x80E8,
    GL_MAX_ELEMENTS_INDICES = 0x80E9,
    GL_TEXTURE_MIN_LOD = 0x813A,
    GL_TEXTURE_MAX_LOD = 0x813B,
    GL_TEXTURE_BASE_LEVEL = 0x813C,
    GL_TEXTURE_MAX_LEVEL = 0x813D,
    GL_DEPTH_COMPONENT24 = 0x81A6,
    GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING = 0x8210,
    GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE = 0x8211,
    GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE = 0x8212,
    GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE = 0x8213,
    GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE = 0x8214,
    GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE = 0x8215,
    GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE = 0x8216,
    GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE = 0x8217,
    GL_FRAMEBUFFER_DEFAULT = 0x8218,
    GL_FRAMEBUFFER_UNDEFINED = 0x8219,
    GL_DEPTH_STENCIL_ATTACHMENT = 0x821A,
    GL_MAJOR_VERSION = 0x821B,
    GL_MINOR_VERSION = 0x821C,
    GL_NUM_EXTENSIONS = 0x821D,
    GL_RG = 0x8227,
    GL_RG_INTEGER = 0x8228,
    GL_R8 = 0x8229,
    GL_RG8 = 0x822B,
    GL_R16F = 0x822D,
    GL_R32F = 0x822E,
    GL_RG16F = 0x822F,
    GL_RG32F = 0x8230,
    GL_R8I = 0x8231,
    GL_R8UI = 0x8232,
    GL_R16I = 0x8233,
    GL_R16UI = 0x8234,
    GL_R32I = 0x8235,
    GL_R32UI = 0x8236,
    GL_RG8I = 0x8237,
    GL_RG8UI = 0x8238,
    GL_RG16I = 0x8239,
    GL_RG16UI = 0x823A,
    GL_RG32I = 0x823B,
    GL_RG32UI = 0x823C,
    GL_PROGRAM_BINARY_RETRIEVABLE_HINT = 0x8257,
    GL_TEXTURE_IMMUTABLE_LEVELS = 0x82DF,
    GL_UNSIGNED_INT_2_10_10_10_REV = 0x8368,
    GL_DEPTH_STENCIL = 0x84F9,
    GL_UNSIGNED_INT_24_8 = 0x84FA,
    GL_MAX_TEXTURE_LOD_BIAS = 0x84FD,
    GL_VERTEX_ARRAY_BINDING = 0x85B5,
    GL_PROGRAM_BINARY_LENGTH = 0x8741,
    GL_NUM_PROGRAM_BINARY_FORMATS = 0x87FE,
    GL_PROGRAM_BINARY_FORMATS = 0x87FF,
    GL_RGBA32F = 0x8814,
    GL_RGB32F = 0x8815,
    GL_RGBA16F = 0x881A,
    GL_RGB16F = 0x881B,
    GL_MAX_DRAW_BUFFERS = 0x8824,
    GL_DRAW_BUFFER0 = 0x8825,
    GL_DRAW_BUFFER1 = 0x8826,
    GL_DRAW_BUFFER2 = 0x8827,
    GL_DRAW_BUFFER3 = 0x8828,
    GL_DRAW_BUFFER4 = 0x8829,
    GL_DRAW_BUFFER5 = 0x882A,
    GL_DRAW_BUFFER6 = 0x882B,
    GL_DRAW_BUFFER7 = 0x882C,
    GL_DRAW_BUFFER8 = 0x882D,
    GL_DRAW_BUFFER9 = 0x882E,
    GL_DRAW_BUFFER10 = 0x882F,
    GL_DRAW_BUFFER11 = 0x8830,
    GL_DRAW_BUFFER12 = 0x8831,
    GL_DRAW_BUFFER13 = 0x8832,
    GL_DRAW_BUFFER14 = 0x8833,
    GL_DRAW_BUFFER15 = 0x8834,
    GL_TEXTURE_COMPARE_MODE = 0x884C,
    GL_TEXTURE_COMPARE_FUNC = 0x884D,
    GL_COMPARE_REF_TO_TEXTURE = 0x884E,
    GL_CURRENT_QUERY = 0x8865,
    GL_QUERY_RESULT = 0x8866,
    GL_QUERY_RESULT_AVAILABLE = 0x8867,
    GL_BUFFER_MAPPED = 0x88BC,
    GL_BUFFER_MAP_POINTER = 0x88BD,
    GL_STREAM_READ = 0x88E1,
    GL_STREAM_COPY = 0x88E2,
    GL_STATIC_READ = 0x88E5,
    GL_STATIC_COPY = 0x88E6,
    GL_DYNAMIC_READ = 0x88E9,
    GL_DYNAMIC_COPY = 0x88EA,
    GL_PIXEL_PACK_BUFFER = 0x88EB,
    GL_PIXEL_UNPACK_BUFFER = 0x88EC,
    GL_PIXEL_PACK_BUFFER_BINDING = 0x88ED,
    GL_PIXEL_UNPACK_BUFFER_BINDING = 0x88EF,
    GL_DEPTH24_STENCIL8 = 0x88F0,
    GL_VERTEX_ATTRIB_ARRAY_INTEGER = 0x88FD,
    GL_VERTEX_ATTRIB_ARRAY_DIVISOR = 0x88FE,
    GL_MAX_ARRAY_TEXTURE_LAYERS = 0x88FF,
    GL_MIN_PROGRAM_TEXEL_OFFSET = 0x8904,
    GL_MAX_PROGRAM_TEXEL_OFFSET = 0x8905,
    GL_SAMPLER_BINDING = 0x8919,
    GL_UNIFORM_BUFFER = 0x8A11,
    GL_UNIFORM_BUFFER_BINDING = 0x8A28,
    GL_UNIFORM_BUFFER_START = 0x8A29,
    GL_UNIFORM_BUFFER_SIZE = 0x8A2A,
    GL_MAX_VERTEX_UNIFORM_BLOCKS = 0x8A2B,
    GL_MAX_FRAGMENT_UNIFORM_BLOCKS = 0x8A2D,
    GL_MAX_COMBINED_UNIFORM_BLOCKS = 0x8A2E,
    GL_MAX_UNIFORM_BUFFER_BINDINGS = 0x8A2F,
    GL_MAX_UNIFORM_BLOCK_SIZE = 0x8A30,
    GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS = 0x8A31,
    GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS = 0x8A33,
    GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT = 0x8A34,
    GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH = 0x8A35,
    GL_ACTIVE_UNIFORM_BLOCKS = 0x8A36,
    GL_UNIFORM_TYPE = 0x8A37,
    GL_UNIFORM_SIZE = 0x8A38,
    GL_UNIFORM_NAME_LENGTH = 0x8A39,
    GL_UNIFORM_BLOCK_INDEX = 0x8A3A,
    GL_UNIFORM_OFFSET = 0x8A3B,
    GL_UNIFORM_ARRAY_STRIDE = 0x8A3C,
    GL_UNIFORM_MATRIX_STRIDE = 0x8A3D,
    GL_UNIFORM_IS_ROW_MAJOR = 0x8A3E,
    GL_UNIFORM_BLOCK_BINDING = 0x8A3F,
    GL_UNIFORM_BLOCK_DATA_SIZE = 0x8A40,
    GL_UNIFORM_BLOCK_NAME_LENGTH = 0x8A41,
    GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS = 0x8A42,
    GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES = 0x8A43,
    GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER = 0x8A44,
    GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER = 0x8A46,
    GL_MAX_FRAGMENT_UNIFORM_COMPONENTS = 0x8B49,
    GL_MAX_VERTEX_UNIFORM_COMPONENTS = 0x8B4A,
    GL_MAX_VARYING_COMPONENTS = 0x8B4B,
    GL_SAMPLER_3D = 0x8B5F,
    GL_SAMPLER_2D_SHADOW = 0x8B62,
    GL_FLOAT_MAT2x3 = 0x8B65,
    GL_FLOAT_MAT2x4 = 0x8B66,
    GL_FLOAT_MAT3x2 = 0x8B67,
    GL_FLOAT_MAT3x4 = 0x8B68,
    GL_FLOAT_MAT4x2 = 0x8B69,
    GL_FLOAT_MAT4x3 = 0x8B6A,
    GL_FRAGMENT_SHADER_DERIVATIVE_HINT = 0x8B8B,
    GL_UNSIGNED_NORMALIZED = 0x8C17,
    GL_TEXTURE_2D_ARRAY = 0x8C1A,
    GL_TEXTURE_BINDING_2D_ARRAY = 0x8C1D,
    GL_ANY_SAMPLES_PASSED = 0x8C2F,
    GL_R11F_G11F_B10F = 0x8C3A,
    GL_UNSIGNED_INT_10F_11F_11F_REV = 0x8C3B,
    GL_RGB9_E5 = 0x8C3D,
    GL_UNSIGNED_INT_5_9_9_9_REV = 0x8C3E,
    GL_SRGB = 0x8C40,
    GL_SRGB8 = 0x8C41,
    GL_SRGB8_ALPHA8 = 0x8C43,
    GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH = 0x8C76,
    GL_TRANSFORM_FEEDBACK_BUFFER_MODE = 0x8C7F,
    GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS = 0x8C80,
    GL_TRANSFORM_FEEDBACK_VARYINGS = 0x8C83,
    GL_TRANSFORM_FEEDBACK_BUFFER_START = 0x8C84,
    GL_TRANSFORM_FEEDBACK_BUFFER_SIZE = 0x8C85,
    GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN = 0x8C88,
    GL_RASTERIZER_DISCARD = 0x8C89,
    GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS = 0x8C8A,
    GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS = 0x8C8B,
    GL_INTERLEAVED_ATTRIBS = 0x8C8C,
    GL_SEPARATE_ATTRIBS = 0x8C8D,
    GL_TRANSFORM_FEEDBACK_BUFFER = 0x8C8E,
    GL_TRANSFORM_FEEDBACK_BUFFER_BINDING = 0x8C8F,
    GL_DRAW_FRAMEBUFFER_BINDING = 0x8CA6,
    GL_READ_FRAMEBUFFER = 0x8CA8,
    GL_DRAW_FRAMEBUFFER = 0x8CA9,
    GL_READ_FRAMEBUFFER_BINDING = 0x8CAA,
    GL_RENDERBUFFER_SAMPLES = 0x8CAB,
    GL_DEPTH_COMPONENT32F = 0x8CAC,
    GL_DEPTH32F_STENCIL8 = 0x8CAD,
    GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER = 0x8CD4,
    GL_MAX_COLOR_ATTACHMENTS = 0x8CDF,
    GL_COLOR_ATTACHMENT1 = 0x8CE1,
    GL_COLOR_ATTACHMENT2 = 0x8CE2,
    GL_COLOR_ATTACHMENT3 = 0x8CE3,
    GL_COLOR_ATTACHMENT4 = 0x8CE4,
    GL_COLOR_ATTACHMENT5 = 0x8CE5,
    GL_COLOR_ATTACHMENT6 = 0x8CE6,
    GL_COLOR_ATTACHMENT7 = 0x8CE7,
    GL_COLOR_ATTACHMENT8 = 0x8CE8,
    GL_COLOR_ATTACHMENT9 = 0x8CE9,
    GL_COLOR_ATTACHMENT10 = 0x8CEA,
    GL_COLOR_ATTACHMENT11 = 0x8CEB,
    GL_COLOR_ATTACHMENT12 = 0x8CEC,
    GL_COLOR_ATTACHMENT13 = 0x8CED,
    GL_COLOR_ATTACHMENT14 = 0x8CEE,
    GL_COLOR_ATTACHMENT15 = 0x8CEF,
    GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE = 0x8D56,
    GL_MAX_SAMPLES = 0x8D57,
    GL_PRIMITIVE_RESTART_FIXED_INDEX = 0x8D69,
    GL_ANY_SAMPLES_PASSED_CONSERVATIVE = 0x8D6A,
    GL_MAX_ELEMENT_INDEX = 0x8D6B,
    GL_RGBA32UI = 0x8D70,
    GL_RGB32UI = 0x8D71,
    GL_RGBA16UI = 0x8D76,
    GL_RGB16UI = 0x8D77,
    GL_RGBA8UI = 0x8D7C,
    GL_RGB8UI = 0x8D7D,
    GL_RGBA32I = 0x8D82,
    GL_RGB32I = 0x8D83,
    GL_RGBA16I = 0x8D88,
    GL_RGB16I = 0x8D89,
    GL_RGBA8I = 0x8D8E,
    GL_RGB8I = 0x8D8F,
    GL_RED_INTEGER = 0x8D94,
    GL_RGB_INTEGER = 0x8D98,
    GL_RGBA_INTEGER = 0x8D99,
    GL_INT_2_10_10_10_REV = 0x8D9F,
    GL_FLOAT_32_UNSIGNED_INT_24_8_REV = 0x8DAD,
    GL_SAMPLER_2D_ARRAY = 0x8DC1,
    GL_SAMPLER_2D_ARRAY_SHADOW = 0x8DC4,
    GL_SAMPLER_CUBE_SHADOW = 0x8DC5,
    GL_UNSIGNED_INT_VEC2 = 0x8DC6,
    GL_UNSIGNED_INT_VEC3 = 0x8DC7,
    GL_UNSIGNED_INT_VEC4 = 0x8DC8,
    GL_INT_SAMPLER_2D = 0x8DCA,
    GL_INT_SAMPLER_3D = 0x8DCB,
    GL_INT_SAMPLER_CUBE = 0x8DCC,
    GL_INT_SAMPLER_2D_ARRAY = 0x8DCF,
    GL_UNSIGNED_INT_SAMPLER_2D = 0x8DD2,
    GL_UNSIGNED_INT_SAMPLER_3D = 0x8DD3,
    GL_UNSIGNED_INT_SAMPLER_CUBE = 0x8DD4,
    GL_UNSIGNED_INT_SAMPLER_2D_ARRAY = 0x8DD7,
    GL_TRANSFORM_FEEDBACK = 0x8E22,
    GL_TRANSFORM_FEEDBACK_PAUSED = 0x8E23,
    GL_TRANSFORM_FEEDBACK_ACTIVE = 0x8E24,
    GL_TRANSFORM_FEEDBACK_BINDING = 0x8E25,
    GL_TEXTURE_SWIZZLE_R = 0x8E42,
    GL_TEXTURE_SWIZZLE_G = 0x8E43,
    GL_TEXTURE_SWIZZLE_B = 0x8E44,
    GL_TEXTURE_SWIZZLE_A = 0x8E45,
    GL_COPY_READ_BUFFER = 0x8F36,
    GL_COPY_READ_BUFFER_BINDING = 0x8F36,
    GL_COPY_WRITE_BUFFER = 0x8F37,
    GL_COPY_WRITE_BUFFER_BINDING = 0x8F37,
    GL_R8_SNORM = 0x8F94,
    GL_RG8_SNORM = 0x8F95,
    GL_RGB8_SNORM = 0x8F96,
    GL_RGBA8_SNORM = 0x8F97,
    GL_SIGNED_NORMALIZED = 0x8F9C,
    GL_RGB10_A2UI = 0x906F,
    GL_MAX_SERVER_WAIT_TIMEOUT = 0x9111,
    GL_OBJECT_TYPE = 0x9112,
    GL_SYNC_CONDITION = 0x9113,
    GL_SYNC_STATUS = 0x9114,
    GL_SYNC_FLAGS = 0x9115,
    GL_SYNC_FENCE = 0x9116,
    GL_SYNC_GPU_COMMANDS_COMPLETE = 0x9117,
    GL_UNSIGNALED = 0x9118,
    GL_SIGNALED = 0x9119,
    GL_ALREADY_SIGNALED = 0x911A,
    GL_TIMEOUT_EXPIRED = 0x911B,
    GL_CONDITION_SATISFIED = 0x911C,
    GL_WAIT_FAILED = 0x911D,
    GL_BUFFER_ACCESS_FLAGS = 0x911F,
    GL_BUFFER_MAP_LENGTH = 0x9120,
    GL_BUFFER_MAP_OFFSET = 0x9121,
    GL_MAX_VERTEX_OUTPUT_COMPONENTS = 0x9122,
    GL_MAX_FRAGMENT_INPUT_COMPONENTS = 0x9125,
    GL_TEXTURE_IMMUTABLE_FORMAT = 0x912F,
    GL_COMPRESSED_R11_EAC = 0x9270,
    GL_COMPRESSED_SIGNED_R11_EAC = 0x9271,
    GL_COMPRESSED_RG11_EAC = 0x9272,
    GL_COMPRESSED_SIGNED_RG11_EAC = 0x9273,
    GL_COMPRESSED_RGB8_ETC2 = 0x9274,
    GL_COMPRESSED_SRGB8_ETC2 = 0x9275,
    GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2 = 0x9276,
    GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2 = 0x9277,
    GL_COMPRESSED_RGBA8_ETC2_EAC = 0x9278,
    GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC = 0x9279,
    GL_NUM_SAMPLE_COUNTS = 0x9380,
    GL_INVALID_INDEX = 0xFFFFFFFF,
    GL_TIMEOUT_IGNORED = 0xFFFFFFFFFFFFFFFF
};
} // namespace enums

using namespace types;
using namespace enums;
typedef void (*PFNGLBEGINQUERYPROC)(GLenum target, GLuint id);
typedef void (*PFNGLBEGINTRANSFORMFEEDBACKPROC)(GLenum primitiveMode);
typedef void (*PFNGLBINDBUFFERBASEPROC)(GLenum target, GLuint index, GLuint buffer);
typedef void (*PFNGLBINDBUFFERRANGEPROC)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (*PFNGLBINDSAMPLERPROC)(GLuint unit, GLuint sampler);
typedef void (*PFNGLBINDTRANSFORMFEEDBACKPROC)(GLenum target, GLuint id);
typedef void (*PFNGLBINDVERTEXARRAYPROC)(GLuint array);
typedef void (*PFNGLBLITFRAMEBUFFERPROC)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef void (*PFNGLCLEARBUFFERFIPROC)(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
typedef void (*PFNGLCLEARBUFFERFVPROC)(GLenum buffer, GLint drawbuffer, const GLfloat *value);
typedef void (*PFNGLCLEARBUFFERIVPROC)(GLenum buffer, GLint drawbuffer, const GLint *value);
typedef void (*PFNGLCLEARBUFFERUIVPROC)(GLenum buffer, GLint drawbuffer, const GLuint *value);
typedef GLenum (*PFNGLCLIENTWAITSYNCPROC)(GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (*PFNGLCOMPRESSEDTEXIMAGE3DPROC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data);
typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
typedef void (*PFNGLCOPYBUFFERSUBDATAPROC)(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void (*PFNGLCOPYTEXSUBIMAGE3DPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (*PFNGLDELETEQUERIESPROC)(GLsizei n, const GLuint *ids);
typedef void (*PFNGLDELETESAMPLERSPROC)(GLsizei count, const GLuint *samplers);
typedef void (*PFNGLDELETESYNCPROC)(GLsync sync);
typedef void (*PFNGLDELETETRANSFORMFEEDBACKSPROC)(GLsizei n, const GLuint *ids);
typedef void (*PFNGLDELETEVERTEXARRAYSPROC)(GLsizei n, const GLuint *arrays);
typedef void (*PFNGLDRAWARRAYSINSTANCEDPROC)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
typedef void (*PFNGLDRAWBUFFERSPROC)(GLsizei n, const GLenum *bufs);
typedef void (*PFNGLDRAWELEMENTSINSTANCEDPROC)(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount);
typedef void (*PFNGLDRAWRANGEELEMENTSPROC)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices);
typedef void (*PFNGLENDQUERYPROC)(GLenum target);
typedef void (*PFNGLENDTRANSFORMFEEDBACKPROC)();
typedef GLsync (*PFNGLFENCESYNCPROC)(GLenum condition, GLbitfield flags);
typedef void (*PFNGLFLUSHMAPPEDBUFFERRANGEPROC)(GLenum target, GLintptr offset, GLsizeiptr length);
typedef void (*PFNGLFRAMEBUFFERTEXTURELAYERPROC)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void (*PFNGLGENQUERIESPROC)(GLsizei n, GLuint *ids);
typedef void (*PFNGLGENSAMPLERSPROC)(GLsizei count, GLuint *samplers);
typedef void (*PFNGLGENTRANSFORMFEEDBACKSPROC)(GLsizei n, GLuint *ids);
typedef void (*PFNGLGENVERTEXARRAYSPROC)(GLsizei n, GLuint *arrays);
typedef void (*PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC)(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName);
typedef void (*PFNGLGETACTIVEUNIFORMBLOCKIVPROC)(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params);
typedef void (*PFNGLGETACTIVEUNIFORMSIVPROC)(GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params);
typedef void (*PFNGLGETBUFFERPARAMETERI64VPROC)(GLenum target, GLenum pname, GLint64 *params);
typedef void (*PFNGLGETBUFFERPOINTERVPROC)(GLenum target, GLenum pname, void **params);
typedef GLint (*PFNGLGETFRAGDATALOCATIONPROC)(GLuint program, const GLchar *name);
typedef void (*PFNGLGETINTEGER64I_VPROC)(GLenum target, GLuint index, GLint64 *data);
typedef void (*PFNGLGETINTEGER64VPROC)(GLenum pname, GLint64 *data);
typedef void (*PFNGLGETINTEGERI_VPROC)(GLenum target, GLuint index, GLint *data);
typedef void (*PFNGLGETINTERNALFORMATIVPROC)(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint *params);
typedef void (*PFNGLGETPROGRAMBINARYPROC)(GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary);
typedef void (*PFNGLGETQUERYOBJECTUIVPROC)(GLuint id, GLenum pname, GLuint *params);
typedef void (*PFNGLGETQUERYIVPROC)(GLenum target, GLenum pname, GLint *params);
typedef void (*PFNGLGETSAMPLERPARAMETERFVPROC)(GLuint sampler, GLenum pname, GLfloat *params);
typedef void (*PFNGLGETSAMPLERPARAMETERIVPROC)(GLuint sampler, GLenum pname, GLint *params);
typedef const GLubyte *(*PFNGLGETSTRINGIPROC)(GLenum name, GLuint index);
typedef void (*PFNGLGETSYNCIVPROC)(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values);
typedef void (*PFNGLGETTRANSFORMFEEDBACKVARYINGPROC)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
typedef GLuint (*PFNGLGETUNIFORMBLOCKINDEXPROC)(GLuint program, const GLchar *uniformBlockName);
typedef void (*PFNGLGETUNIFORMINDICESPROC)(GLuint program, GLsizei uniformCount, const GLchar *const*uniformNames, GLuint *uniformIndices);
typedef void (*PFNGLGETUNIFORMUIVPROC)(GLuint program, GLint location, GLuint *params);
typedef void (*PFNGLGETVERTEXATTRIBIIVPROC)(GLuint index, GLenum pname, GLint *params);
typedef void (*PFNGLGETVERTEXATTRIBIUIVPROC)(GLuint index, GLenum pname, GLuint *params);
typedef void (*PFNGLINVALIDATEFRAMEBUFFERPROC)(GLenum target, GLsizei numAttachments, const GLenum *attachments);
typedef void (*PFNGLINVALIDATESUBFRAMEBUFFERPROC)(GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
typedef GLboolean (*PFNGLISQUERYPROC)(GLuint id);
typedef GLboolean (*PFNGLISSAMPLERPROC)(GLuint sampler);
typedef GLboolean (*PFNGLISSYNCPROC)(GLsync sync);
typedef GLboolean (*PFNGLISTRANSFORMFEEDBACKPROC)(GLuint id);
typedef GLboolean (*PFNGLISVERTEXARRAYPROC)(GLuint array);
typedef void *(*PFNGLMAPBUFFERRANGEPROC)(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef void (*PFNGLPAUSETRANSFORMFEEDBACKPROC)();
typedef void (*PFNGLPROGRAMBINARYPROC)(GLuint program, GLenum binaryFormat, const void *binary, GLsizei length);
typedef void (*PFNGLPROGRAMPARAMETERIPROC)(GLuint program, GLenum pname, GLint value);
typedef void (*PFNGLREADBUFFERPROC)(GLenum src);
typedef void (*PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (*PFNGLRESUMETRANSFORMFEEDBACKPROC)();
typedef void (*PFNGLSAMPLERPARAMETERFPROC)(GLuint sampler, GLenum pname, GLfloat param);
typedef void (*PFNGLSAMPLERPARAMETERFVPROC)(GLuint sampler, GLenum pname, const GLfloat *param);
typedef void (*PFNGLSAMPLERPARAMETERIPROC)(GLuint sampler, GLenum pname, GLint param);
typedef void (*PFNGLSAMPLERPARAMETERIVPROC)(GLuint sampler, GLenum pname, const GLint *param);
typedef void (*PFNGLTEXIMAGE3DPROC)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
typedef void (*PFNGLTEXSTORAGE2DPROC)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (*PFNGLTEXSTORAGE3DPROC)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (*PFNGLTEXSUBIMAGE3DPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
typedef void (*PFNGLTRANSFORMFEEDBACKVARYINGSPROC)(GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode);
typedef void (*PFNGLUNIFORM1UIPROC)(GLint location, GLuint v0);
typedef void (*PFNGLUNIFORM1UIVPROC)(GLint location, GLsizei count, const GLuint *value);
typedef void (*PFNGLUNIFORM2UIPROC)(GLint location, GLuint v0, GLuint v1);
typedef void (*PFNGLUNIFORM2UIVPROC)(GLint location, GLsizei count, const GLuint *value);
typedef void (*PFNGLUNIFORM3UIPROC)(GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (*PFNGLUNIFORM3UIVPROC)(GLint location, GLsizei count, const GLuint *value);
typedef void (*PFNGLUNIFORM4UIPROC)(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (*PFNGLUNIFORM4UIVPROC)(GLint location, GLsizei count, const GLuint *value);
typedef void (*PFNGLUNIFORMBLOCKBINDINGPROC)(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
typedef void (*PFNGLUNIFORMMATRIX2X3FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (*PFNGLUNIFORMMATRIX2X4FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (*PFNGLUNIFORMMATRIX3X2FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (*PFNGLUNIFORMMATRIX3X4FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (*PFNGLUNIFORMMATRIX4X2FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (*PFNGLUNIFORMMATRIX4X3FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef GLboolean (*PFNGLUNMAPBUFFERPROC)(GLenum target);
typedef void (*PFNGLVERTEXATTRIBDIVISORPROC)(GLuint index, GLuint divisor);
typedef void (*PFNGLVERTEXATTRIBI4IPROC)(GLuint index, GLint x, GLint y, GLint z, GLint w);
typedef void (*PFNGLVERTEXATTRIBI4IVPROC)(GLuint index, const GLint *v);
typedef void (*PFNGLVERTEXATTRIBI4UIPROC)(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
typedef void (*PFNGLVERTEXATTRIBI4UIVPROC)(GLuint index, const GLuint *v);
typedef void (*PFNGLVERTEXATTRIBIPOINTERPROC)(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
typedef void (*PFNGLWAITSYNCPROC)(GLsync sync, GLbitfield flags, GLuint64 timeout);

class Context : public gles20::Context {
    PFNGLBEGINQUERYPROC _beginQuery;
    PFNGLBEGINTRANSFORMFEEDBACKPROC _beginTransformFeedback;
    PFNGLBINDBUFFERBASEPROC _bindBufferBase;
    PFNGLBINDBUFFERRANGEPROC _bindBufferRange;
    PFNGLBINDSAMPLERPROC _bindSampler;
    PFNGLBINDTRANSFORMFEEDBACKPROC _bindTransformFeedback;
    PFNGLBINDVERTEXARRAYPROC _bindVertexArray;
    PFNGLBLITFRAMEBUFFERPROC _blitFramebuffer;
    PFNGLCLEARBUFFERFIPROC _clearBufferfi;
    PFNGLCLEARBUFFERFVPROC _clearBufferfv;
    PFNGLCLEARBUFFERIVPROC _clearBufferiv;
    PFNGLCLEARBUFFERUIVPROC _clearBufferuiv;
    PFNGLCLIENTWAITSYNCPROC _clientWaitSync;
    PFNGLCOMPRESSEDTEXIMAGE3DPROC _compressedTexImage3D;
    PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC _compressedTexSubImage3D;
    PFNGLCOPYBUFFERSUBDATAPROC _copyBufferSubData;
    PFNGLCOPYTEXSUBIMAGE3DPROC _copyTexSubImage3D;
    PFNGLDELETEQUERIESPROC _deleteQueries;
    PFNGLDELETESAMPLERSPROC _deleteSamplers;
    PFNGLDELETESYNCPROC _deleteSync;
    PFNGLDELETETRANSFORMFEEDBACKSPROC _deleteTransformFeedbacks;
    PFNGLDELETEVERTEXARRAYSPROC _deleteVertexArrays;
    PFNGLDRAWARRAYSINSTANCEDPROC _drawArraysInstanced;
    PFNGLDRAWBUFFERSPROC _drawBuffers;
    PFNGLDRAWELEMENTSINSTANCEDPROC _drawElementsInstanced;
    PFNGLDRAWRANGEELEMENTSPROC _drawRangeElements;
    PFNGLENDQUERYPROC _endQuery;
    PFNGLENDTRANSFORMFEEDBACKPROC _endTransformFeedback;
    PFNGLFENCESYNCPROC _fenceSync;
    PFNGLFLUSHMAPPEDBUFFERRANGEPROC _flushMappedBufferRange;
    PFNGLFRAMEBUFFERTEXTURELAYERPROC _framebufferTextureLayer;
    PFNGLGENQUERIESPROC _genQueries;
    PFNGLGENSAMPLERSPROC _genSamplers;
    PFNGLGENTRANSFORMFEEDBACKSPROC _genTransformFeedbacks;
    PFNGLGENVERTEXARRAYSPROC _genVertexArrays;
    PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC _getActiveUniformBlockName;
    PFNGLGETACTIVEUNIFORMBLOCKIVPROC _getActiveUniformBlockiv;
    PFNGLGETACTIVEUNIFORMSIVPROC _getActiveUniformsiv;
    PFNGLGETBUFFERPARAMETERI64VPROC _getBufferParameteri64v;
    PFNGLGETBUFFERPOINTERVPROC _getBufferPointerv;
    PFNGLGETFRAGDATALOCATIONPROC _getFragDataLocation;
    PFNGLGETINTEGER64I_VPROC _getInteger64i_v;
    PFNGLGETINTEGER64VPROC _getInteger64v;
    PFNGLGETINTEGERI_VPROC _getIntegeri_v;
    PFNGLGETINTERNALFORMATIVPROC _getInternalformativ;
    PFNGLGETPROGRAMBINARYPROC _getProgramBinary;
    PFNGLGETQUERYOBJECTUIVPROC _getQueryObjectuiv;
    PFNGLGETQUERYIVPROC _getQueryiv;
    PFNGLGETSAMPLERPARAMETERFVPROC _getSamplerParameterfv;
    PFNGLGETSAMPLERPARAMETERIVPROC _getSamplerParameteriv;
    PFNGLGETSTRINGIPROC _getStringi;
    PFNGLGETSYNCIVPROC _getSynciv;
    PFNGLGETTRANSFORMFEEDBACKVARYINGPROC _getTransformFeedbackVarying;
    PFNGLGETUNIFORMBLOCKINDEXPROC _getUniformBlockIndex;
    PFNGLGETUNIFORMINDICESPROC _getUniformIndices;
    PFNGLGETUNIFORMUIVPROC _getUniformuiv;
    PFNGLGETVERTEXATTRIBIIVPROC _getVertexAttribIiv;
    PFNGLGETVERTEXATTRIBIUIVPROC _getVertexAttribIuiv;
    PFNGLINVALIDATEFRAMEBUFFERPROC _invalidateFramebuffer;
    PFNGLINVALIDATESUBFRAMEBUFFERPROC _invalidateSubFramebuffer;
    PFNGLISQUERYPROC _isQuery;
    PFNGLISSAMPLERPROC _isSampler;
    PFNGLISSYNCPROC _isSync;
    PFNGLISTRANSFORMFEEDBACKPROC _isTransformFeedback;
    PFNGLISVERTEXARRAYPROC _isVertexArray;
    PFNGLMAPBUFFERRANGEPROC _mapBufferRange;
    PFNGLPAUSETRANSFORMFEEDBACKPROC _pauseTransformFeedback;
    PFNGLPROGRAMBINARYPROC _programBinary;
    PFNGLPROGRAMPARAMETERIPROC _programParameteri;
    PFNGLREADBUFFERPROC _readBuffer;
    PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC _renderbufferStorageMultisample;
    PFNGLRESUMETRANSFORMFEEDBACKPROC _resumeTransformFeedback;
    PFNGLSAMPLERPARAMETERFPROC _samplerParameterf;
    PFNGLSAMPLERPARAMETERFVPROC _samplerParameterfv;
    PFNGLSAMPLERPARAMETERIPROC _samplerParameteri;
    PFNGLSAMPLERPARAMETERIVPROC _samplerParameteriv;
    PFNGLTEXIMAGE3DPROC _texImage3D;
    PFNGLTEXSTORAGE2DPROC _texStorage2D;
    PFNGLTEXSTORAGE3DPROC _texStorage3D;
    PFNGLTEXSUBIMAGE3DPROC _texSubImage3D;
    PFNGLTRANSFORMFEEDBACKVARYINGSPROC _transformFeedbackVaryings;
    PFNGLUNIFORM1UIPROC _uniform1ui;
    PFNGLUNIFORM1UIVPROC _uniform1uiv;
    PFNGLUNIFORM2UIPROC _uniform2ui;
    PFNGLUNIFORM2UIVPROC _uniform2uiv;
    PFNGLUNIFORM3UIPROC _uniform3ui;
    PFNGLUNIFORM3UIVPROC _uniform3uiv;
    PFNGLUNIFORM4UIPROC _uniform4ui;
    PFNGLUNIFORM4UIVPROC _uniform4uiv;
    PFNGLUNIFORMBLOCKBINDINGPROC _uniformBlockBinding;
    PFNGLUNIFORMMATRIX2X3FVPROC _uniformMatrix2x3fv;
    PFNGLUNIFORMMATRIX2X4FVPROC _uniformMatrix2x4fv;
    PFNGLUNIFORMMATRIX3X2FVPROC _uniformMatrix3x2fv;
    PFNGLUNIFORMMATRIX3X4FVPROC _uniformMatrix3x4fv;
    PFNGLUNIFORMMATRIX4X2FVPROC _uniformMatrix4x2fv;
    PFNGLUNIFORMMATRIX4X3FVPROC _uniformMatrix4x3fv;
    PFNGLUNMAPBUFFERPROC _unmapBuffer;
    PFNGLVERTEXATTRIBDIVISORPROC _vertexAttribDivisor;
    PFNGLVERTEXATTRIBI4IPROC _vertexAttribI4i;
    PFNGLVERTEXATTRIBI4IVPROC _vertexAttribI4iv;
    PFNGLVERTEXATTRIBI4UIPROC _vertexAttribI4ui;
    PFNGLVERTEXATTRIBI4UIVPROC _vertexAttribI4uiv;
    PFNGLVERTEXATTRIBIPOINTERPROC _vertexAttribIPointer;
    PFNGLWAITSYNCPROC _waitSync;

public:
    template<typename GetProcAddress>
    Context(GetProcAddress getProcAddress);

    Context(const Context&) = delete;

    Context(Context&&) = default;

    void beginQuery(GLenum target, GLuint id) {
        _beginQuery(target, id);
    };

    void beginTransformFeedback(GLenum primitiveMode) {
        _beginTransformFeedback(primitiveMode);
    };

    void bindBufferBase(GLenum target, GLuint index, GLuint buffer) {
        _bindBufferBase(target, index, buffer);
    };

    void bindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) {
        _bindBufferRange(target, index, buffer, offset, size);
    };

    void bindSampler(GLuint unit, GLuint sampler) {
        _bindSampler(unit, sampler);
    };

    void bindTransformFeedback(GLenum target, GLuint id) {
        _bindTransformFeedback(target, id);
    };

    void bindVertexArray(GLuint array) {
        _bindVertexArray(array);
    };

    void blitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) {
        _blitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
    };

    void clearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil) {
        _clearBufferfi(buffer, drawbuffer, depth, stencil);
    };

    void clearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat *value) {
        _clearBufferfv(buffer, drawbuffer, value);
    };

    void clearBufferiv(GLenum buffer, GLint drawbuffer, const GLint *value) {
        _clearBufferiv(buffer, drawbuffer, value);
    };

    void clearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint *value) {
        _clearBufferuiv(buffer, drawbuffer, value);
    };

    GLenum clientWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout) {
        return _clientWaitSync(sync, flags, timeout);
    };

    void compressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data) {
        _compressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
    };

    void compressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data) {
        _compressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
    };

    void copyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) {
        _copyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
    };

    void copyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
        _copyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
    };

    void deleteQueries(GLsizei n, const GLuint *ids) {
        _deleteQueries(n, ids);
    };

    void deleteSamplers(GLsizei count, const GLuint *samplers) {
        _deleteSamplers(count, samplers);
    };

    void deleteSync(GLsync sync) {
        _deleteSync(sync);
    };

    void deleteTransformFeedbacks(GLsizei n, const GLuint *ids) {
        _deleteTransformFeedbacks(n, ids);
    };

    void deleteVertexArrays(GLsizei n, const GLuint *arrays) {
        _deleteVertexArrays(n, arrays);
    };

    void drawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount) {
        _drawArraysInstanced(mode, first, count, instancecount);
    };

    void drawBuffers(GLsizei n, const GLenum *bufs) {
        _drawBuffers(n, bufs);
    };

    void drawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount) {
        _drawElementsInstanced(mode, count, type, indices, instancecount);
    };

    void drawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices) {
        _drawRangeElements(mode, start, end, count, type, indices);
    };

    void endQuery(GLenum target) {
        _endQuery(target);
    };

    void endTransformFeedback() {
        _endTransformFeedback();
    };

    GLsync fenceSync(GLenum condition, GLbitfield flags) {
        return _fenceSync(condition, flags);
    };

    void flushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length) {
        _flushMappedBufferRange(target, offset, length);
    };

    void framebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) {
        _framebufferTextureLayer(target, attachment, texture, level, layer);
    };

    void genQueries(GLsizei n, GLuint *ids) {
        _genQueries(n, ids);
    };

    void genSamplers(GLsizei count, GLuint *samplers) {
        _genSamplers(count, samplers);
    };

    void genTransformFeedbacks(GLsizei n, GLuint *ids) {
        _genTransformFeedbacks(n, ids);
    };

    void genVertexArrays(GLsizei n, GLuint *arrays) {
        _genVertexArrays(n, arrays);
    };

    void getActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName) {
        _getActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
    };

    void getActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params) {
        _getActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
    };

    void getActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params) {
        _getActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
    };

    void getBufferParameteri64v(GLenum target, GLenum pname, GLint64 *params) {
        _getBufferParameteri64v(target, pname, params);
    };

    void getBufferPointerv(GLenum target, GLenum pname, void **params) {
        _getBufferPointerv(target, pname, params);
    };

    GLint getFragDataLocation(GLuint program, const GLchar *name) {
        return _getFragDataLocation(program, name);
    };

    void getInteger64i_v(GLenum target, GLuint index, GLint64 *data) {
        _getInteger64i_v(target, index, data);
    };

    void getInteger64v(GLenum pname, GLint64 *data) {
        _getInteger64v(pname, data);
    };

    void getIntegeri_v(GLenum target, GLuint index, GLint *data) {
        _getIntegeri_v(target, index, data);
    };

    void getInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint *params) {
        _getInternalformativ(target, internalformat, pname, bufSize, params);
    };

    void getProgramBinary(GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary) {
        _getProgramBinary(program, bufSize, length, binaryFormat, binary);
    };

    void getQueryObjectuiv(GLuint id, GLenum pname, GLuint *params) {
        _getQueryObjectuiv(id, pname, params);
    };

    void getQueryiv(GLenum target, GLenum pname, GLint *params) {
        _getQueryiv(target, pname, params);
    };

    void getSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat *params) {
        _getSamplerParameterfv(sampler, pname, params);
    };

    void getSamplerParameteriv(GLuint sampler, GLenum pname, GLint *params) {
        _getSamplerParameteriv(sampler, pname, params);
    };

    const GLubyte *getStringi(GLenum name, GLuint index) {
        return _getStringi(name, index);
    };

    void getSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values) {
        _getSynciv(sync, pname, bufSize, length, values);
    };

    void getTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name) {
        _getTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
    };

    GLuint getUniformBlockIndex(GLuint program, const GLchar *uniformBlockName) {
        return _getUniformBlockIndex(program, uniformBlockName);
    };

    void getUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const*uniformNames, GLuint *uniformIndices) {
        _getUniformIndices(program, uniformCount, uniformNames, uniformIndices);
    };

    void getUniformuiv(GLuint program, GLint location, GLuint *params) {
        _getUniformuiv(program, location, params);
    };

    void getVertexAttribIiv(GLuint index, GLenum pname, GLint *params) {
        _getVertexAttribIiv(index, pname, params);
    };

    void getVertexAttribIuiv(GLuint index, GLenum pname, GLuint *params) {
        _getVertexAttribIuiv(index, pname, params);
    };

    void invalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum *attachments) {
        _invalidateFramebuffer(target, numAttachments, attachments);
    };

    void invalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height) {
        _invalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
    };

    GLboolean isQuery(GLuint id) {
        return _isQuery(id);
    };

    GLboolean isSampler(GLuint sampler) {
        return _isSampler(sampler);
    };

    GLboolean isSync(GLsync sync) {
        return _isSync(sync);
    };

    GLboolean isTransformFeedback(GLuint id) {
        return _isTransformFeedback(id);
    };

    GLboolean isVertexArray(GLuint array) {
        return _isVertexArray(array);
    };

    void *mapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access) {
        _mapBufferRange(target, offset, length, access);
    };

    void pauseTransformFeedback() {
        _pauseTransformFeedback();
    };

    void programBinary(GLuint program, GLenum binaryFormat, const void *binary, GLsizei length) {
        _programBinary(program, binaryFormat, binary, length);
    };

    void programParameteri(GLuint program, GLenum pname, GLint value) {
        _programParameteri(program, pname, value);
    };

    void readBuffer(GLenum src) {
        _readBuffer(src);
    };

    void renderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) {
        _renderbufferStorageMultisample(target, samples, internalformat, width, height);
    };

    void resumeTransformFeedback() {
        _resumeTransformFeedback();
    };

    void samplerParameterf(GLuint sampler, GLenum pname, GLfloat param) {
        _samplerParameterf(sampler, pname, param);
    };

    void samplerParameterfv(GLuint sampler, GLenum pname, const GLfloat *param) {
        _samplerParameterfv(sampler, pname, param);
    };

    void samplerParameteri(GLuint sampler, GLenum pname, GLint param) {
        _samplerParameteri(sampler, pname, param);
    };

    void samplerParameteriv(GLuint sampler, GLenum pname, const GLint *param) {
        _samplerParameteriv(sampler, pname, param);
    };

    void texImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels) {
        _texImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
    };

    void texStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) {
        _texStorage2D(target, levels, internalformat, width, height);
    };

    void texStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) {
        _texStorage3D(target, levels, internalformat, width, height, depth);
    };

    void texSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels) {
        _texSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
    };

    void transformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode) {
        _transformFeedbackVaryings(program, count, varyings, bufferMode);
    };

    void uniform1ui(GLint location, GLuint v0) {
        _uniform1ui(location, v0);
    };

    void uniform1uiv(GLint location, GLsizei count, const GLuint *value) {
        _uniform1uiv(location, count, value);
    };

    void uniform2ui(GLint location, GLuint v0, GLuint v1) {
        _uniform2ui(location, v0, v1);
    };

    void uniform2uiv(GLint location, GLsizei count, const GLuint *value) {
        _uniform2uiv(location, count, value);
    };

    void uniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2) {
        _uniform3ui(location, v0, v1, v2);
    };

    void uniform3uiv(GLint location, GLsizei count, const GLuint *value) {
        _uniform3uiv(location, count, value);
    };

    void uniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) {
        _uniform4ui(location, v0, v1, v2, v3);
    };

    void uniform4uiv(GLint location, GLsizei count, const GLuint *value) {
        _uniform4uiv(location, count, value);
    };

    void uniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding) {
        _uniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
    };

    void uniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
        _uniformMatrix2x3fv(location, count, transpose, value);
    };

    void uniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
        _uniformMatrix2x4fv(location, count, transpose, value);
    };

    void uniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
        _uniformMatrix3x2fv(location, count, transpose, value);
    };

    void uniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
        _uniformMatrix3x4fv(location, count, transpose, value);
    };

    void uniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
        _uniformMatrix4x2fv(location, count, transpose, value);
    };

    void uniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
        _uniformMatrix4x3fv(location, count, transpose, value);
    };

    GLboolean unmapBuffer(GLenum target) {
        return _unmapBuffer(target);
    };

    void vertexAttribDivisor(GLuint index, GLuint divisor) {
        _vertexAttribDivisor(index, divisor);
    };

    void vertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w) {
        _vertexAttribI4i(index, x, y, z, w);
    };

    void vertexAttribI4iv(GLuint index, const GLint *v) {
        _vertexAttribI4iv(index, v);
    };

    void vertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) {
        _vertexAttribI4ui(index, x, y, z, w);
    };

    void vertexAttribI4uiv(GLuint index, const GLuint *v) {
        _vertexAttribI4uiv(index, v);
    };

    void vertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer) {
        _vertexAttribIPointer(index, size, type, stride, pointer);
    };

    void waitSync(GLsync sync, GLbitfield flags, GLuint64 timeout) {
        _waitSync(sync, flags, timeout);
    };

}; // class Context


template<typename GetProcAddress>
Context::Context(GetProcAddress f) : gles20::Context(f)
{
    std::runtime_error err("getProcAddress returned nullptr");
    _beginQuery = reinterpret_cast<PFNGLBEGINQUERYPROC>(f("glBeginQuery"));
    if (!_beginQuery) throw err;
    _beginTransformFeedback = reinterpret_cast<PFNGLBEGINTRANSFORMFEEDBACKPROC>(f("glBeginTransformFeedback"));
    if (!_beginTransformFeedback) throw err;
    _bindBufferBase = reinterpret_cast<PFNGLBINDBUFFERBASEPROC>(f("glBindBufferBase"));
    if (!_bindBufferBase) throw err;
    _bindBufferRange = reinterpret_cast<PFNGLBINDBUFFERRANGEPROC>(f("glBindBufferRange"));
    if (!_bindBufferRange) throw err;
    _bindSampler = reinterpret_cast<PFNGLBINDSAMPLERPROC>(f("glBindSampler"));
    if (!_bindSampler) throw err;
    _bindTransformFeedback = reinterpret_cast<PFNGLBINDTRANSFORMFEEDBACKPROC>(f("glBindTransformFeedback"));
    if (!_bindTransformFeedback) throw err;
    _bindVertexArray = reinterpret_cast<PFNGLBINDVERTEXARRAYPROC>(f("glBindVertexArray"));
    if (!_bindVertexArray) throw err;
    _blitFramebuffer = reinterpret_cast<PFNGLBLITFRAMEBUFFERPROC>(f("glBlitFramebuffer"));
    if (!_blitFramebuffer) throw err;
    _clearBufferfi = reinterpret_cast<PFNGLCLEARBUFFERFIPROC>(f("glClearBufferfi"));
    if (!_clearBufferfi) throw err;
    _clearBufferfv = reinterpret_cast<PFNGLCLEARBUFFERFVPROC>(f("glClearBufferfv"));
    if (!_clearBufferfv) throw err;
    _clearBufferiv = reinterpret_cast<PFNGLCLEARBUFFERIVPROC>(f("glClearBufferiv"));
    if (!_clearBufferiv) throw err;
    _clearBufferuiv = reinterpret_cast<PFNGLCLEARBUFFERUIVPROC>(f("glClearBufferuiv"));
    if (!_clearBufferuiv) throw err;
    _clientWaitSync = reinterpret_cast<PFNGLCLIENTWAITSYNCPROC>(f("glClientWaitSync"));
    if (!_clientWaitSync) throw err;
    _compressedTexImage3D = reinterpret_cast<PFNGLCOMPRESSEDTEXIMAGE3DPROC>(f("glCompressedTexImage3D"));
    if (!_compressedTexImage3D) throw err;
    _compressedTexSubImage3D = reinterpret_cast<PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC>(f("glCompressedTexSubImage3D"));
    if (!_compressedTexSubImage3D) throw err;
    _copyBufferSubData = reinterpret_cast<PFNGLCOPYBUFFERSUBDATAPROC>(f("glCopyBufferSubData"));
    if (!_copyBufferSubData) throw err;
    _copyTexSubImage3D = reinterpret_cast<PFNGLCOPYTEXSUBIMAGE3DPROC>(f("glCopyTexSubImage3D"));
    if (!_copyTexSubImage3D) throw err;
    _deleteQueries = reinterpret_cast<PFNGLDELETEQUERIESPROC>(f("glDeleteQueries"));
    if (!_deleteQueries) throw err;
    _deleteSamplers = reinterpret_cast<PFNGLDELETESAMPLERSPROC>(f("glDeleteSamplers"));
    if (!_deleteSamplers) throw err;
    _deleteSync = reinterpret_cast<PFNGLDELETESYNCPROC>(f("glDeleteSync"));
    if (!_deleteSync) throw err;
    _deleteTransformFeedbacks = reinterpret_cast<PFNGLDELETETRANSFORMFEEDBACKSPROC>(f("glDeleteTransformFeedbacks"));
    if (!_deleteTransformFeedbacks) throw err;
    _deleteVertexArrays = reinterpret_cast<PFNGLDELETEVERTEXARRAYSPROC>(f("glDeleteVertexArrays"));
    if (!_deleteVertexArrays) throw err;
    _drawArraysInstanced = reinterpret_cast<PFNGLDRAWARRAYSINSTANCEDPROC>(f("glDrawArraysInstanced"));
    if (!_drawArraysInstanced) throw err;
    _drawBuffers = reinterpret_cast<PFNGLDRAWBUFFERSPROC>(f("glDrawBuffers"));
    if (!_drawBuffers) throw err;
    _drawElementsInstanced = reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDPROC>(f("glDrawElementsInstanced"));
    if (!_drawElementsInstanced) throw err;
    _drawRangeElements = reinterpret_cast<PFNGLDRAWRANGEELEMENTSPROC>(f("glDrawRangeElements"));
    if (!_drawRangeElements) throw err;
    _endQuery = reinterpret_cast<PFNGLENDQUERYPROC>(f("glEndQuery"));
    if (!_endQuery) throw err;
    _endTransformFeedback = reinterpret_cast<PFNGLENDTRANSFORMFEEDBACKPROC>(f("glEndTransformFeedback"));
    if (!_endTransformFeedback) throw err;
    _fenceSync = reinterpret_cast<PFNGLFENCESYNCPROC>(f("glFenceSync"));
    if (!_fenceSync) throw err;
    _flushMappedBufferRange = reinterpret_cast<PFNGLFLUSHMAPPEDBUFFERRANGEPROC>(f("glFlushMappedBufferRange"));
    if (!_flushMappedBufferRange) throw err;
    _framebufferTextureLayer = reinterpret_cast<PFNGLFRAMEBUFFERTEXTURELAYERPROC>(f("glFramebufferTextureLayer"));
    if (!_framebufferTextureLayer) throw err;
    _genQueries = reinterpret_cast<PFNGLGENQUERIESPROC>(f("glGenQueries"));
    if (!_genQueries) throw err;
    _genSamplers = reinterpret_cast<PFNGLGENSAMPLERSPROC>(f("glGenSamplers"));
    if (!_genSamplers) throw err;
    _genTransformFeedbacks = reinterpret_cast<PFNGLGENTRANSFORMFEEDBACKSPROC>(f("glGenTransformFeedbacks"));
    if (!_genTransformFeedbacks) throw err;
    _genVertexArrays = reinterpret_cast<PFNGLGENVERTEXARRAYSPROC>(f("glGenVertexArrays"));
    if (!_genVertexArrays) throw err;
    _getActiveUniformBlockName = reinterpret_cast<PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC>(f("glGetActiveUniformBlockName"));
    if (!_getActiveUniformBlockName) throw err;
    _getActiveUniformBlockiv = reinterpret_cast<PFNGLGETACTIVEUNIFORMBLOCKIVPROC>(f("glGetActiveUniformBlockiv"));
    if (!_getActiveUniformBlockiv) throw err;
    _getActiveUniformsiv = reinterpret_cast<PFNGLGETACTIVEUNIFORMSIVPROC>(f("glGetActiveUniformsiv"));
    if (!_getActiveUniformsiv) throw err;
    _getBufferParameteri64v = reinterpret_cast<PFNGLGETBUFFERPARAMETERI64VPROC>(f("glGetBufferParameteri64v"));
    if (!_getBufferParameteri64v) throw err;
    _getBufferPointerv = reinterpret_cast<PFNGLGETBUFFERPOINTERVPROC>(f("glGetBufferPointerv"));
    if (!_getBufferPointerv) throw err;
    _getFragDataLocation = reinterpret_cast<PFNGLGETFRAGDATALOCATIONPROC>(f("glGetFragDataLocation"));
    if (!_getFragDataLocation) throw err;
    _getInteger64i_v = reinterpret_cast<PFNGLGETINTEGER64I_VPROC>(f("glGetInteger64i_v"));
    if (!_getInteger64i_v) throw err;
    _getInteger64v = reinterpret_cast<PFNGLGETINTEGER64VPROC>(f("glGetInteger64v"));
    if (!_getInteger64v) throw err;
    _getIntegeri_v = reinterpret_cast<PFNGLGETINTEGERI_VPROC>(f("glGetIntegeri_v"));
    if (!_getIntegeri_v) throw err;
    _getInternalformativ = reinterpret_cast<PFNGLGETINTERNALFORMATIVPROC>(f("glGetInternalformativ"));
    if (!_getInternalformativ) throw err;
    _getProgramBinary = reinterpret_cast<PFNGLGETPROGRAMBINARYPROC>(f("glGetProgramBinary"));
    if (!_getProgramBinary) throw err;
    _getQueryObjectuiv = reinterpret_cast<PFNGLGETQUERYOBJECTUIVPROC>(f("glGetQueryObjectuiv"));
    if (!_getQueryObjectuiv) throw err;
    _getQueryiv = reinterpret_cast<PFNGLGETQUERYIVPROC>(f("glGetQueryiv"));
    if (!_getQueryiv) throw err;
    _getSamplerParameterfv = reinterpret_cast<PFNGLGETSAMPLERPARAMETERFVPROC>(f("glGetSamplerParameterfv"));
    if (!_getSamplerParameterfv) throw err;
    _getSamplerParameteriv = reinterpret_cast<PFNGLGETSAMPLERPARAMETERIVPROC>(f("glGetSamplerParameteriv"));
    if (!_getSamplerParameteriv) throw err;
    _getStringi = reinterpret_cast<PFNGLGETSTRINGIPROC>(f("glGetStringi"));
    if (!_getStringi) throw err;
    _getSynciv = reinterpret_cast<PFNGLGETSYNCIVPROC>(f("glGetSynciv"));
    if (!_getSynciv) throw err;
    _getTransformFeedbackVarying = reinterpret_cast<PFNGLGETTRANSFORMFEEDBACKVARYINGPROC>(f("glGetTransformFeedbackVarying"));
    if (!_getTransformFeedbackVarying) throw err;
    _getUniformBlockIndex = reinterpret_cast<PFNGLGETUNIFORMBLOCKINDEXPROC>(f("glGetUniformBlockIndex"));
    if (!_getUniformBlockIndex) throw err;
    _getUniformIndices = reinterpret_cast<PFNGLGETUNIFORMINDICESPROC>(f("glGetUniformIndices"));
    if (!_getUniformIndices) throw err;
    _getUniformuiv = reinterpret_cast<PFNGLGETUNIFORMUIVPROC>(f("glGetUniformuiv"));
    if (!_getUniformuiv) throw err;
    _getVertexAttribIiv = reinterpret_cast<PFNGLGETVERTEXATTRIBIIVPROC>(f("glGetVertexAttribIiv"));
    if (!_getVertexAttribIiv) throw err;
    _getVertexAttribIuiv = reinterpret_cast<PFNGLGETVERTEXATTRIBIUIVPROC>(f("glGetVertexAttribIuiv"));
    if (!_getVertexAttribIuiv) throw err;
    _invalidateFramebuffer = reinterpret_cast<PFNGLINVALIDATEFRAMEBUFFERPROC>(f("glInvalidateFramebuffer"));
    if (!_invalidateFramebuffer) throw err;
    _invalidateSubFramebuffer = reinterpret_cast<PFNGLINVALIDATESUBFRAMEBUFFERPROC>(f("glInvalidateSubFramebuffer"));
    if (!_invalidateSubFramebuffer) throw err;
    _isQuery = reinterpret_cast<PFNGLISQUERYPROC>(f("glIsQuery"));
    if (!_isQuery) throw err;
    _isSampler = reinterpret_cast<PFNGLISSAMPLERPROC>(f("glIsSampler"));
    if (!_isSampler) throw err;
    _isSync = reinterpret_cast<PFNGLISSYNCPROC>(f("glIsSync"));
    if (!_isSync) throw err;
    _isTransformFeedback = reinterpret_cast<PFNGLISTRANSFORMFEEDBACKPROC>(f("glIsTransformFeedback"));
    if (!_isTransformFeedback) throw err;
    _isVertexArray = reinterpret_cast<PFNGLISVERTEXARRAYPROC>(f("glIsVertexArray"));
    if (!_isVertexArray) throw err;
    _mapBufferRange = reinterpret_cast<PFNGLMAPBUFFERRANGEPROC>(f("glMapBufferRange"));
    if (!_mapBufferRange) throw err;
    _pauseTransformFeedback = reinterpret_cast<PFNGLPAUSETRANSFORMFEEDBACKPROC>(f("glPauseTransformFeedback"));
    if (!_pauseTransformFeedback) throw err;
    _programBinary = reinterpret_cast<PFNGLPROGRAMBINARYPROC>(f("glProgramBinary"));
    if (!_programBinary) throw err;
    _programParameteri = reinterpret_cast<PFNGLPROGRAMPARAMETERIPROC>(f("glProgramParameteri"));
    if (!_programParameteri) throw err;
    _readBuffer = reinterpret_cast<PFNGLREADBUFFERPROC>(f("glReadBuffer"));
    if (!_readBuffer) throw err;
    _renderbufferStorageMultisample = reinterpret_cast<PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC>(f("glRenderbufferStorageMultisample"));
    if (!_renderbufferStorageMultisample) throw err;
    _resumeTransformFeedback = reinterpret_cast<PFNGLRESUMETRANSFORMFEEDBACKPROC>(f("glResumeTransformFeedback"));
    if (!_resumeTransformFeedback) throw err;
    _samplerParameterf = reinterpret_cast<PFNGLSAMPLERPARAMETERFPROC>(f("glSamplerParameterf"));
    if (!_samplerParameterf) throw err;
    _samplerParameterfv = reinterpret_cast<PFNGLSAMPLERPARAMETERFVPROC>(f("glSamplerParameterfv"));
    if (!_samplerParameterfv) throw err;
    _samplerParameteri = reinterpret_cast<PFNGLSAMPLERPARAMETERIPROC>(f("glSamplerParameteri"));
    if (!_samplerParameteri) throw err;
    _samplerParameteriv = reinterpret_cast<PFNGLSAMPLERPARAMETERIVPROC>(f("glSamplerParameteriv"));
    if (!_samplerParameteriv) throw err;
    _texImage3D = reinterpret_cast<PFNGLTEXIMAGE3DPROC>(f("glTexImage3D"));
    if (!_texImage3D) throw err;
    _texStorage2D = reinterpret_cast<PFNGLTEXSTORAGE2DPROC>(f("glTexStorage2D"));
    if (!_texStorage2D) throw err;
    _texStorage3D = reinterpret_cast<PFNGLTEXSTORAGE3DPROC>(f("glTexStorage3D"));
    if (!_texStorage3D) throw err;
    _texSubImage3D = reinterpret_cast<PFNGLTEXSUBIMAGE3DPROC>(f("glTexSubImage3D"));
    if (!_texSubImage3D) throw err;
    _transformFeedbackVaryings = reinterpret_cast<PFNGLTRANSFORMFEEDBACKVARYINGSPROC>(f("glTransformFeedbackVaryings"));
    if (!_transformFeedbackVaryings) throw err;
    _uniform1ui = reinterpret_cast<PFNGLUNIFORM1UIPROC>(f("glUniform1ui"));
    if (!_uniform1ui) throw err;
    _uniform1uiv = reinterpret_cast<PFNGLUNIFORM1UIVPROC>(f("glUniform1uiv"));
    if (!_uniform1uiv) throw err;
    _uniform2ui = reinterpret_cast<PFNGLUNIFORM2UIPROC>(f("glUniform2ui"));
    if (!_uniform2ui) throw err;
    _uniform2uiv = reinterpret_cast<PFNGLUNIFORM2UIVPROC>(f("glUniform2uiv"));
    if (!_uniform2uiv) throw err;
    _uniform3ui = reinterpret_cast<PFNGLUNIFORM3UIPROC>(f("glUniform3ui"));
    if (!_uniform3ui) throw err;
    _uniform3uiv = reinterpret_cast<PFNGLUNIFORM3UIVPROC>(f("glUniform3uiv"));
    if (!_uniform3uiv) throw err;
    _uniform4ui = reinterpret_cast<PFNGLUNIFORM4UIPROC>(f("glUniform4ui"));
    if (!_uniform4ui) throw err;
    _uniform4uiv = reinterpret_cast<PFNGLUNIFORM4UIVPROC>(f("glUniform4uiv"));
    if (!_uniform4uiv) throw err;
    _uniformBlockBinding = reinterpret_cast<PFNGLUNIFORMBLOCKBINDINGPROC>(f("glUniformBlockBinding"));
    if (!_uniformBlockBinding) throw err;
    _uniformMatrix2x3fv = reinterpret_cast<PFNGLUNIFORMMATRIX2X3FVPROC>(f("glUniformMatrix2x3fv"));
    if (!_uniformMatrix2x3fv) throw err;
    _uniformMatrix2x4fv = reinterpret_cast<PFNGLUNIFORMMATRIX2X4FVPROC>(f("glUniformMatrix2x4fv"));
    if (!_uniformMatrix2x4fv) throw err;
    _uniformMatrix3x2fv = reinterpret_cast<PFNGLUNIFORMMATRIX3X2FVPROC>(f("glUniformMatrix3x2fv"));
    if (!_uniformMatrix3x2fv) throw err;
    _uniformMatrix3x4fv = reinterpret_cast<PFNGLUNIFORMMATRIX3X4FVPROC>(f("glUniformMatrix3x4fv"));
    if (!_uniformMatrix3x4fv) throw err;
    _uniformMatrix4x2fv = reinterpret_cast<PFNGLUNIFORMMATRIX4X2FVPROC>(f("glUniformMatrix4x2fv"));
    if (!_uniformMatrix4x2fv) throw err;
    _uniformMatrix4x3fv = reinterpret_cast<PFNGLUNIFORMMATRIX4X3FVPROC>(f("glUniformMatrix4x3fv"));
    if (!_uniformMatrix4x3fv) throw err;
    _unmapBuffer = reinterpret_cast<PFNGLUNMAPBUFFERPROC>(f("glUnmapBuffer"));
    if (!_unmapBuffer) throw err;
    _vertexAttribDivisor = reinterpret_cast<PFNGLVERTEXATTRIBDIVISORPROC>(f("glVertexAttribDivisor"));
    if (!_vertexAttribDivisor) throw err;
    _vertexAttribI4i = reinterpret_cast<PFNGLVERTEXATTRIBI4IPROC>(f("glVertexAttribI4i"));
    if (!_vertexAttribI4i) throw err;
    _vertexAttribI4iv = reinterpret_cast<PFNGLVERTEXATTRIBI4IVPROC>(f("glVertexAttribI4iv"));
    if (!_vertexAttribI4iv) throw err;
    _vertexAttribI4ui = reinterpret_cast<PFNGLVERTEXATTRIBI4UIPROC>(f("glVertexAttribI4ui"));
    if (!_vertexAttribI4ui) throw err;
    _vertexAttribI4uiv = reinterpret_cast<PFNGLVERTEXATTRIBI4UIVPROC>(f("glVertexAttribI4uiv"));
    if (!_vertexAttribI4uiv) throw err;
    _vertexAttribIPointer = reinterpret_cast<PFNGLVERTEXATTRIBIPOINTERPROC>(f("glVertexAttribIPointer"));
    if (!_vertexAttribIPointer) throw err;
    _waitSync = reinterpret_cast<PFNGLWAITSYNCPROC>(f("glWaitSync"));
    if (!_waitSync) throw err;
}

} // namespace gles30
} // namespace pyk
#endif
