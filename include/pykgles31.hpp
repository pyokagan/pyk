#ifndef _PYKGLES31_
#define _PYKGLES31_
#include "pykgles30.hpp"

namespace pyk {
namespace gles31 {

namespace types {
using namespace gles30::types;
} // namespace types

namespace enums {

using namespace gles30::enums;

enum {
    GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT = 0x00000001,
    GL_VERTEX_SHADER_BIT = 0x00000001,
    GL_ELEMENT_ARRAY_BARRIER_BIT = 0x00000002,
    GL_FRAGMENT_SHADER_BIT = 0x00000002,
    GL_UNIFORM_BARRIER_BIT = 0x00000004,
    GL_TEXTURE_FETCH_BARRIER_BIT = 0x00000008,
    GL_COMPUTE_SHADER_BIT = 0x00000020,
    GL_SHADER_IMAGE_ACCESS_BARRIER_BIT = 0x00000020,
    GL_COMMAND_BARRIER_BIT = 0x00000040,
    GL_PIXEL_BUFFER_BARRIER_BIT = 0x00000080,
    GL_TEXTURE_UPDATE_BARRIER_BIT = 0x00000100,
    GL_BUFFER_UPDATE_BARRIER_BIT = 0x00000200,
    GL_FRAMEBUFFER_BARRIER_BIT = 0x00000400,
    GL_TRANSFORM_FEEDBACK_BARRIER_BIT = 0x00000800,
    GL_ATOMIC_COUNTER_BARRIER_BIT = 0x00001000,
    GL_SHADER_STORAGE_BARRIER_BIT = 0x00002000,
    GL_TEXTURE_WIDTH = 0x1000,
    GL_TEXTURE_HEIGHT = 0x1001,
    GL_TEXTURE_INTERNAL_FORMAT = 0x1003,
    GL_STENCIL_INDEX = 0x1901,
    GL_TEXTURE_RED_SIZE = 0x805C,
    GL_TEXTURE_GREEN_SIZE = 0x805D,
    GL_TEXTURE_BLUE_SIZE = 0x805E,
    GL_TEXTURE_ALPHA_SIZE = 0x805F,
    GL_TEXTURE_DEPTH = 0x8071,
    GL_PROGRAM_SEPARABLE = 0x8258,
    GL_ACTIVE_PROGRAM = 0x8259,
    GL_PROGRAM_PIPELINE_BINDING = 0x825A,
    GL_MAX_COMPUTE_SHARED_MEMORY_SIZE = 0x8262,
    GL_MAX_COMPUTE_UNIFORM_COMPONENTS = 0x8263,
    GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS = 0x8264,
    GL_MAX_COMPUTE_ATOMIC_COUNTERS = 0x8265,
    GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS = 0x8266,
    GL_COMPUTE_WORK_GROUP_SIZE = 0x8267,
    GL_MAX_UNIFORM_LOCATIONS = 0x826E,
    GL_VERTEX_ATTRIB_BINDING = 0x82D4,
    GL_VERTEX_ATTRIB_RELATIVE_OFFSET = 0x82D5,
    GL_VERTEX_BINDING_DIVISOR = 0x82D6,
    GL_VERTEX_BINDING_OFFSET = 0x82D7,
    GL_VERTEX_BINDING_STRIDE = 0x82D8,
    GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET = 0x82D9,
    GL_MAX_VERTEX_ATTRIB_BINDINGS = 0x82DA,
    GL_MAX_VERTEX_ATTRIB_STRIDE = 0x82E5,
    GL_TEXTURE_COMPRESSED = 0x86A1,
    GL_TEXTURE_DEPTH_SIZE = 0x884A,
    GL_READ_ONLY = 0x88B8,
    GL_WRITE_ONLY = 0x88B9,
    GL_READ_WRITE = 0x88BA,
    GL_TEXTURE_STENCIL_SIZE = 0x88F1,
    GL_TEXTURE_RED_TYPE = 0x8C10,
    GL_TEXTURE_GREEN_TYPE = 0x8C11,
    GL_TEXTURE_BLUE_TYPE = 0x8C12,
    GL_TEXTURE_ALPHA_TYPE = 0x8C13,
    GL_TEXTURE_DEPTH_TYPE = 0x8C16,
    GL_TEXTURE_SHARED_SIZE = 0x8C3F,
    GL_SAMPLE_POSITION = 0x8E50,
    GL_SAMPLE_MASK = 0x8E51,
    GL_SAMPLE_MASK_VALUE = 0x8E52,
    GL_MAX_SAMPLE_MASK_WORDS = 0x8E59,
    GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET = 0x8E5E,
    GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET = 0x8E5F,
    GL_MAX_IMAGE_UNITS = 0x8F38,
    GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES = 0x8F39,
    GL_IMAGE_BINDING_NAME = 0x8F3A,
    GL_IMAGE_BINDING_LEVEL = 0x8F3B,
    GL_IMAGE_BINDING_LAYERED = 0x8F3C,
    GL_IMAGE_BINDING_LAYER = 0x8F3D,
    GL_IMAGE_BINDING_ACCESS = 0x8F3E,
    GL_DRAW_INDIRECT_BUFFER = 0x8F3F,
    GL_DRAW_INDIRECT_BUFFER_BINDING = 0x8F43,
    GL_VERTEX_BINDING_BUFFER = 0x8F4F,
    GL_IMAGE_2D = 0x904D,
    GL_IMAGE_3D = 0x904E,
    GL_IMAGE_CUBE = 0x9050,
    GL_IMAGE_2D_ARRAY = 0x9053,
    GL_INT_IMAGE_2D = 0x9058,
    GL_INT_IMAGE_3D = 0x9059,
    GL_INT_IMAGE_CUBE = 0x905B,
    GL_INT_IMAGE_2D_ARRAY = 0x905E,
    GL_UNSIGNED_INT_IMAGE_2D = 0x9063,
    GL_UNSIGNED_INT_IMAGE_3D = 0x9064,
    GL_UNSIGNED_INT_IMAGE_CUBE = 0x9066,
    GL_UNSIGNED_INT_IMAGE_2D_ARRAY = 0x9069,
    GL_IMAGE_BINDING_FORMAT = 0x906E,
    GL_IMAGE_FORMAT_COMPATIBILITY_TYPE = 0x90C7,
    GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE = 0x90C8,
    GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS = 0x90C9,
    GL_MAX_VERTEX_IMAGE_UNIFORMS = 0x90CA,
    GL_MAX_FRAGMENT_IMAGE_UNIFORMS = 0x90CE,
    GL_MAX_COMBINED_IMAGE_UNIFORMS = 0x90CF,
    GL_SHADER_STORAGE_BUFFER = 0x90D2,
    GL_SHADER_STORAGE_BUFFER_BINDING = 0x90D3,
    GL_SHADER_STORAGE_BUFFER_START = 0x90D4,
    GL_SHADER_STORAGE_BUFFER_SIZE = 0x90D5,
    GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS = 0x90D6,
    GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS = 0x90DA,
    GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS = 0x90DB,
    GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS = 0x90DC,
    GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS = 0x90DD,
    GL_MAX_SHADER_STORAGE_BLOCK_SIZE = 0x90DE,
    GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT = 0x90DF,
    GL_DEPTH_STENCIL_TEXTURE_MODE = 0x90EA,
    GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS = 0x90EB,
    GL_DISPATCH_INDIRECT_BUFFER = 0x90EE,
    GL_DISPATCH_INDIRECT_BUFFER_BINDING = 0x90EF,
    GL_TEXTURE_2D_MULTISAMPLE = 0x9100,
    GL_TEXTURE_BINDING_2D_MULTISAMPLE = 0x9104,
    GL_TEXTURE_SAMPLES = 0x9106,
    GL_TEXTURE_FIXED_SAMPLE_LOCATIONS = 0x9107,
    GL_SAMPLER_2D_MULTISAMPLE = 0x9108,
    GL_INT_SAMPLER_2D_MULTISAMPLE = 0x9109,
    GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE = 0x910A,
    GL_MAX_COLOR_TEXTURE_SAMPLES = 0x910E,
    GL_MAX_DEPTH_TEXTURE_SAMPLES = 0x910F,
    GL_MAX_INTEGER_SAMPLES = 0x9110,
    GL_COMPUTE_SHADER = 0x91B9,
    GL_MAX_COMPUTE_UNIFORM_BLOCKS = 0x91BB,
    GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS = 0x91BC,
    GL_MAX_COMPUTE_IMAGE_UNIFORMS = 0x91BD,
    GL_MAX_COMPUTE_WORK_GROUP_COUNT = 0x91BE,
    GL_MAX_COMPUTE_WORK_GROUP_SIZE = 0x91BF,
    GL_ATOMIC_COUNTER_BUFFER = 0x92C0,
    GL_ATOMIC_COUNTER_BUFFER_BINDING = 0x92C1,
    GL_ATOMIC_COUNTER_BUFFER_START = 0x92C2,
    GL_ATOMIC_COUNTER_BUFFER_SIZE = 0x92C3,
    GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS = 0x92CC,
    GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS = 0x92D0,
    GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS = 0x92D1,
    GL_MAX_VERTEX_ATOMIC_COUNTERS = 0x92D2,
    GL_MAX_FRAGMENT_ATOMIC_COUNTERS = 0x92D6,
    GL_MAX_COMBINED_ATOMIC_COUNTERS = 0x92D7,
    GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE = 0x92D8,
    GL_ACTIVE_ATOMIC_COUNTER_BUFFERS = 0x92D9,
    GL_UNSIGNED_INT_ATOMIC_COUNTER = 0x92DB,
    GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS = 0x92DC,
    GL_UNIFORM = 0x92E1,
    GL_UNIFORM_BLOCK = 0x92E2,
    GL_PROGRAM_INPUT = 0x92E3,
    GL_PROGRAM_OUTPUT = 0x92E4,
    GL_BUFFER_VARIABLE = 0x92E5,
    GL_SHADER_STORAGE_BLOCK = 0x92E6,
    GL_TRANSFORM_FEEDBACK_VARYING = 0x92F4,
    GL_ACTIVE_RESOURCES = 0x92F5,
    GL_MAX_NAME_LENGTH = 0x92F6,
    GL_MAX_NUM_ACTIVE_VARIABLES = 0x92F7,
    GL_NAME_LENGTH = 0x92F9,
    GL_TYPE = 0x92FA,
    GL_ARRAY_SIZE = 0x92FB,
    GL_OFFSET = 0x92FC,
    GL_BLOCK_INDEX = 0x92FD,
    GL_ARRAY_STRIDE = 0x92FE,
    GL_MATRIX_STRIDE = 0x92FF,
    GL_IS_ROW_MAJOR = 0x9300,
    GL_ATOMIC_COUNTER_BUFFER_INDEX = 0x9301,
    GL_BUFFER_BINDING = 0x9302,
    GL_BUFFER_DATA_SIZE = 0x9303,
    GL_NUM_ACTIVE_VARIABLES = 0x9304,
    GL_ACTIVE_VARIABLES = 0x9305,
    GL_REFERENCED_BY_VERTEX_SHADER = 0x9306,
    GL_REFERENCED_BY_FRAGMENT_SHADER = 0x930A,
    GL_REFERENCED_BY_COMPUTE_SHADER = 0x930B,
    GL_TOP_LEVEL_ARRAY_SIZE = 0x930C,
    GL_TOP_LEVEL_ARRAY_STRIDE = 0x930D,
    GL_LOCATION = 0x930E,
    GL_FRAMEBUFFER_DEFAULT_WIDTH = 0x9310,
    GL_FRAMEBUFFER_DEFAULT_HEIGHT = 0x9311,
    GL_FRAMEBUFFER_DEFAULT_SAMPLES = 0x9313,
    GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS = 0x9314,
    GL_MAX_FRAMEBUFFER_WIDTH = 0x9315,
    GL_MAX_FRAMEBUFFER_HEIGHT = 0x9316,
    GL_MAX_FRAMEBUFFER_SAMPLES = 0x9318,
    GL_ALL_BARRIER_BITS = 0xFFFFFFFF,
    GL_ALL_SHADER_BITS = 0xFFFFFFFF
};
} // namespace enums

using namespace types;
using namespace enums;

typedef void (*PFNGLACTIVESHADERPROGRAMPROC)(GLuint pipeline, GLuint program);
typedef void (*PFNGLBINDIMAGETEXTUREPROC)(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
typedef void (*PFNGLBINDPROGRAMPIPELINEPROC)(GLuint pipeline);
typedef void (*PFNGLBINDVERTEXBUFFERPROC)(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
typedef GLuint (*PFNGLCREATESHADERPROGRAMVPROC)(GLenum type, GLsizei count, const GLchar *const*strings);
typedef void (*PFNGLDELETEPROGRAMPIPELINESPROC)(GLsizei n, const GLuint *pipelines);
typedef void (*PFNGLDISPATCHCOMPUTEPROC)(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
typedef void (*PFNGLDISPATCHCOMPUTEINDIRECTPROC)(GLintptr indirect);
typedef void (*PFNGLDRAWARRAYSINDIRECTPROC)(GLenum mode, const void *indirect);
typedef void (*PFNGLDRAWELEMENTSINDIRECTPROC)(GLenum mode, GLenum type, const void *indirect);
typedef void (*PFNGLFRAMEBUFFERPARAMETERIPROC)(GLenum target, GLenum pname, GLint param);
typedef void (*PFNGLGENPROGRAMPIPELINESPROC)(GLsizei n, GLuint *pipelines);
typedef void (*PFNGLGETBOOLEANI_VPROC)(GLenum target, GLuint index, GLboolean *data);
typedef void (*PFNGLGETFRAMEBUFFERPARAMETERIVPROC)(GLenum target, GLenum pname, GLint *params);
typedef void (*PFNGLGETMULTISAMPLEFVPROC)(GLenum pname, GLuint index, GLfloat *val);
typedef void (*PFNGLGETPROGRAMINTERFACEIVPROC)(GLuint program, GLenum programInterface, GLenum pname, GLint *params);
typedef void (*PFNGLGETPROGRAMPIPELINEINFOLOGPROC)(GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void (*PFNGLGETPROGRAMPIPELINEIVPROC)(GLuint pipeline, GLenum pname, GLint *params);
typedef GLuint (*PFNGLGETPROGRAMRESOURCEINDEXPROC)(GLuint program, GLenum programInterface, const GLchar *name);
typedef GLint (*PFNGLGETPROGRAMRESOURCELOCATIONPROC)(GLuint program, GLenum programInterface, const GLchar *name);
typedef void (*PFNGLGETPROGRAMRESOURCENAMEPROC)(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
typedef void (*PFNGLGETPROGRAMRESOURCEIVPROC)(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLint *params);
typedef void (*PFNGLGETTEXLEVELPARAMETERFVPROC)(GLenum target, GLint level, GLenum pname, GLfloat *params);
typedef void (*PFNGLGETTEXLEVELPARAMETERIVPROC)(GLenum target, GLint level, GLenum pname, GLint *params);
typedef GLboolean (*PFNGLISPROGRAMPIPELINEPROC)(GLuint pipeline);
typedef void (*PFNGLMEMORYBARRIERPROC)(GLbitfield barriers);
typedef void (*PFNGLMEMORYBARRIERBYREGIONPROC)(GLbitfield barriers);
typedef void (*PFNGLPROGRAMUNIFORM1FPROC)(GLuint program, GLint location, GLfloat v0);
typedef void (*PFNGLPROGRAMUNIFORM1FVPROC)(GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (*PFNGLPROGRAMUNIFORM1IPROC)(GLuint program, GLint location, GLint v0);
typedef void (*PFNGLPROGRAMUNIFORM1IVPROC)(GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (*PFNGLPROGRAMUNIFORM1UIPROC)(GLuint program, GLint location, GLuint v0);
typedef void (*PFNGLPROGRAMUNIFORM1UIVPROC)(GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (*PFNGLPROGRAMUNIFORM2FPROC)(GLuint program, GLint location, GLfloat v0, GLfloat v1);
typedef void (*PFNGLPROGRAMUNIFORM2FVPROC)(GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (*PFNGLPROGRAMUNIFORM2IPROC)(GLuint program, GLint location, GLint v0, GLint v1);
typedef void (*PFNGLPROGRAMUNIFORM2IVPROC)(GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (*PFNGLPROGRAMUNIFORM2UIPROC)(GLuint program, GLint location, GLuint v0, GLuint v1);
typedef void (*PFNGLPROGRAMUNIFORM2UIVPROC)(GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (*PFNGLPROGRAMUNIFORM3FPROC)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (*PFNGLPROGRAMUNIFORM3FVPROC)(GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (*PFNGLPROGRAMUNIFORM3IPROC)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
typedef void (*PFNGLPROGRAMUNIFORM3IVPROC)(GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (*PFNGLPROGRAMUNIFORM3UIPROC)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (*PFNGLPROGRAMUNIFORM3UIVPROC)(GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (*PFNGLPROGRAMUNIFORM4FPROC)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (*PFNGLPROGRAMUNIFORM4FVPROC)(GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (*PFNGLPROGRAMUNIFORM4IPROC)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (*PFNGLPROGRAMUNIFORM4IVPROC)(GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (*PFNGLPROGRAMUNIFORM4UIPROC)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (*PFNGLPROGRAMUNIFORM4UIVPROC)(GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (*PFNGLPROGRAMUNIFORMMATRIX2FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (*PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (*PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (*PFNGLPROGRAMUNIFORMMATRIX3FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (*PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (*PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (*PFNGLPROGRAMUNIFORMMATRIX4FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (*PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (*PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (*PFNGLSAMPLEMASKIPROC)(GLuint maskNumber, GLbitfield mask);
typedef void (*PFNGLTEXSTORAGE2DMULTISAMPLEPROC)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (*PFNGLUSEPROGRAMSTAGESPROC)(GLuint pipeline, GLbitfield stages, GLuint program);
typedef void (*PFNGLVALIDATEPROGRAMPIPELINEPROC)(GLuint pipeline);
typedef void (*PFNGLVERTEXATTRIBBINDINGPROC)(GLuint attribindex, GLuint bindingindex);
typedef void (*PFNGLVERTEXATTRIBFORMATPROC)(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
typedef void (*PFNGLVERTEXATTRIBIFORMATPROC)(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (*PFNGLVERTEXBINDINGDIVISORPROC)(GLuint bindingindex, GLuint divisor);


class Context : public gles30::Context {

    PFNGLACTIVESHADERPROGRAMPROC _activeShaderProgram;
    PFNGLBINDIMAGETEXTUREPROC _bindImageTexture;
    PFNGLBINDPROGRAMPIPELINEPROC _bindProgramPipeline;
    PFNGLBINDVERTEXBUFFERPROC _bindVertexBuffer;
    PFNGLCREATESHADERPROGRAMVPROC _createShaderProgramv;
    PFNGLDELETEPROGRAMPIPELINESPROC _deleteProgramPipelines;
    PFNGLDISPATCHCOMPUTEPROC _dispatchCompute;
    PFNGLDISPATCHCOMPUTEINDIRECTPROC _dispatchComputeIndirect;
    PFNGLDRAWARRAYSINDIRECTPROC _drawArraysIndirect;
    PFNGLDRAWELEMENTSINDIRECTPROC _drawElementsIndirect;
    PFNGLFRAMEBUFFERPARAMETERIPROC _framebufferParameteri;
    PFNGLGENPROGRAMPIPELINESPROC _genProgramPipelines;
    PFNGLGETBOOLEANI_VPROC _getBooleani_v;
    PFNGLGETFRAMEBUFFERPARAMETERIVPROC _getFramebufferParameteriv;
    PFNGLGETMULTISAMPLEFVPROC _getMultisamplefv;
    PFNGLGETPROGRAMINTERFACEIVPROC _getProgramInterfaceiv;
    PFNGLGETPROGRAMPIPELINEINFOLOGPROC _getProgramPipelineInfoLog;
    PFNGLGETPROGRAMPIPELINEIVPROC _getProgramPipelineiv;
    PFNGLGETPROGRAMRESOURCEINDEXPROC _getProgramResourceIndex;
    PFNGLGETPROGRAMRESOURCELOCATIONPROC _getProgramResourceLocation;
    PFNGLGETPROGRAMRESOURCENAMEPROC _getProgramResourceName;
    PFNGLGETPROGRAMRESOURCEIVPROC _getProgramResourceiv;
    PFNGLGETTEXLEVELPARAMETERFVPROC _getTexLevelParameterfv;
    PFNGLGETTEXLEVELPARAMETERIVPROC _getTexLevelParameteriv;
    PFNGLISPROGRAMPIPELINEPROC _isProgramPipeline;
    PFNGLMEMORYBARRIERPROC _memoryBarrier;
    PFNGLMEMORYBARRIERBYREGIONPROC _memoryBarrierByRegion;
    PFNGLPROGRAMUNIFORM1FPROC _programUniform1f;
    PFNGLPROGRAMUNIFORM1FVPROC _programUniform1fv;
    PFNGLPROGRAMUNIFORM1IPROC _programUniform1i;
    PFNGLPROGRAMUNIFORM1IVPROC _programUniform1iv;
    PFNGLPROGRAMUNIFORM1UIPROC _programUniform1ui;
    PFNGLPROGRAMUNIFORM1UIVPROC _programUniform1uiv;
    PFNGLPROGRAMUNIFORM2FPROC _programUniform2f;
    PFNGLPROGRAMUNIFORM2FVPROC _programUniform2fv;
    PFNGLPROGRAMUNIFORM2IPROC _programUniform2i;
    PFNGLPROGRAMUNIFORM2IVPROC _programUniform2iv;
    PFNGLPROGRAMUNIFORM2UIPROC _programUniform2ui;
    PFNGLPROGRAMUNIFORM2UIVPROC _programUniform2uiv;
    PFNGLPROGRAMUNIFORM3FPROC _programUniform3f;
    PFNGLPROGRAMUNIFORM3FVPROC _programUniform3fv;
    PFNGLPROGRAMUNIFORM3IPROC _programUniform3i;
    PFNGLPROGRAMUNIFORM3IVPROC _programUniform3iv;
    PFNGLPROGRAMUNIFORM3UIPROC _programUniform3ui;
    PFNGLPROGRAMUNIFORM3UIVPROC _programUniform3uiv;
    PFNGLPROGRAMUNIFORM4FPROC _programUniform4f;
    PFNGLPROGRAMUNIFORM4FVPROC _programUniform4fv;
    PFNGLPROGRAMUNIFORM4IPROC _programUniform4i;
    PFNGLPROGRAMUNIFORM4IVPROC _programUniform4iv;
    PFNGLPROGRAMUNIFORM4UIPROC _programUniform4ui;
    PFNGLPROGRAMUNIFORM4UIVPROC _programUniform4uiv;
    PFNGLPROGRAMUNIFORMMATRIX2FVPROC _programUniformMatrix2fv;
    PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC _programUniformMatrix2x3fv;
    PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC _programUniformMatrix2x4fv;
    PFNGLPROGRAMUNIFORMMATRIX3FVPROC _programUniformMatrix3fv;
    PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC _programUniformMatrix3x2fv;
    PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC _programUniformMatrix3x4fv;
    PFNGLPROGRAMUNIFORMMATRIX4FVPROC _programUniformMatrix4fv;
    PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC _programUniformMatrix4x2fv;
    PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC _programUniformMatrix4x3fv;
    PFNGLSAMPLEMASKIPROC _sampleMaski;
    PFNGLTEXSTORAGE2DMULTISAMPLEPROC _texStorage2DMultisample;
    PFNGLUSEPROGRAMSTAGESPROC _useProgramStages;
    PFNGLVALIDATEPROGRAMPIPELINEPROC _validateProgramPipeline;
    PFNGLVERTEXATTRIBBINDINGPROC _vertexAttribBinding;
    PFNGLVERTEXATTRIBFORMATPROC _vertexAttribFormat;
    PFNGLVERTEXATTRIBIFORMATPROC _vertexAttribIFormat;
    PFNGLVERTEXBINDINGDIVISORPROC _vertexBindingDivisor;

public:
    template<typename GetProcAddress>
    Context(GetProcAddress getProcAddress);

    Context(const Context&) = delete;

    Context(Context&&) = default;

    void activeShaderProgram(GLuint pipeline, GLuint program) {
        _activeShaderProgram(pipeline, program);
    };

    void bindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format) {
        _bindImageTexture(unit, texture, level, layered, layer, access, format);
    };

    void bindProgramPipeline(GLuint pipeline) {
        _bindProgramPipeline(pipeline);
    };

    void bindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) {
        _bindVertexBuffer(bindingindex, buffer, offset, stride);
    };

    GLuint createShaderProgramv(GLenum type, GLsizei count, const GLchar *const*strings) {
        return _createShaderProgramv(type, count, strings);
    };

    void deleteProgramPipelines(GLsizei n, const GLuint *pipelines) {
        _deleteProgramPipelines(n, pipelines);
    };

    void dispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z) {
        _dispatchCompute(num_groups_x, num_groups_y, num_groups_z);
    };

    void dispatchComputeIndirect(GLintptr indirect) {
        _dispatchComputeIndirect(indirect);
    };

    void drawArraysIndirect(GLenum mode, const void *indirect) {
        _drawArraysIndirect(mode, indirect);
    };

    void drawElementsIndirect(GLenum mode, GLenum type, const void *indirect) {
        _drawElementsIndirect(mode, type, indirect);
    };

    void framebufferParameteri(GLenum target, GLenum pname, GLint param) {
        _framebufferParameteri(target, pname, param);
    };

    void genProgramPipelines(GLsizei n, GLuint *pipelines) {
        _genProgramPipelines(n, pipelines);
    };

    void getBooleani_v(GLenum target, GLuint index, GLboolean *data) {
        _getBooleani_v(target, index, data);
    };

    void getFramebufferParameteriv(GLenum target, GLenum pname, GLint *params) {
        _getFramebufferParameteriv(target, pname, params);
    };

    void getMultisamplefv(GLenum pname, GLuint index, GLfloat *val) {
        _getMultisamplefv(pname, index, val);
    };

    void getProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint *params) {
        _getProgramInterfaceiv(program, programInterface, pname, params);
    };

    void getProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog) {
        _getProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
    };

    void getProgramPipelineiv(GLuint pipeline, GLenum pname, GLint *params) {
        _getProgramPipelineiv(pipeline, pname, params);
    };

    GLuint getProgramResourceIndex(GLuint program, GLenum programInterface, const GLchar *name) {
        return _getProgramResourceIndex(program, programInterface, name);
    };

    GLint getProgramResourceLocation(GLuint program, GLenum programInterface, const GLchar *name) {
        return _getProgramResourceLocation(program, programInterface, name);
    };

    void getProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name) {
        _getProgramResourceName(program, programInterface, index, bufSize, length, name);
    };

    void getProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLint *params) {
        _getProgramResourceiv(program, programInterface, index, propCount, props, bufSize, length, params);
    };

    void getTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat *params) {
        _getTexLevelParameterfv(target, level, pname, params);
    };

    void getTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint *params) {
        _getTexLevelParameteriv(target, level, pname, params);
    };

    GLboolean isProgramPipeline(GLuint pipeline) {
        return _isProgramPipeline(pipeline);
    };

    void memoryBarrier(GLbitfield barriers) {
        _memoryBarrier(barriers);
    };

    void memoryBarrierByRegion(GLbitfield barriers) {
        _memoryBarrierByRegion(barriers);
    };

    void programUniform1f(GLuint program, GLint location, GLfloat v0) {
        _programUniform1f(program, location, v0);
    };

    void programUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat *value) {
        _programUniform1fv(program, location, count, value);
    };

    void programUniform1i(GLuint program, GLint location, GLint v0) {
        _programUniform1i(program, location, v0);
    };

    void programUniform1iv(GLuint program, GLint location, GLsizei count, const GLint *value) {
        _programUniform1iv(program, location, count, value);
    };

    void programUniform1ui(GLuint program, GLint location, GLuint v0) {
        _programUniform1ui(program, location, v0);
    };

    void programUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint *value) {
        _programUniform1uiv(program, location, count, value);
    };

    void programUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1) {
        _programUniform2f(program, location, v0, v1);
    };

    void programUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat *value) {
        _programUniform2fv(program, location, count, value);
    };

    void programUniform2i(GLuint program, GLint location, GLint v0, GLint v1) {
        _programUniform2i(program, location, v0, v1);
    };

    void programUniform2iv(GLuint program, GLint location, GLsizei count, const GLint *value) {
        _programUniform2iv(program, location, count, value);
    };

    void programUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1) {
        _programUniform2ui(program, location, v0, v1);
    };

    void programUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint *value) {
        _programUniform2uiv(program, location, count, value);
    };

    void programUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2) {
        _programUniform3f(program, location, v0, v1, v2);
    };

    void programUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat *value) {
        _programUniform3fv(program, location, count, value);
    };

    void programUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2) {
        _programUniform3i(program, location, v0, v1, v2);
    };

    void programUniform3iv(GLuint program, GLint location, GLsizei count, const GLint *value) {
        _programUniform3iv(program, location, count, value);
    };

    void programUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2) {
        _programUniform3ui(program, location, v0, v1, v2);
    };

    void programUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint *value) {
        _programUniform3uiv(program, location, count, value);
    };

    void programUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) {
        _programUniform4f(program, location, v0, v1, v2, v3);
    };

    void programUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat *value) {
        _programUniform4fv(program, location, count, value);
    };

    void programUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3) {
        _programUniform4i(program, location, v0, v1, v2, v3);
    };

    void programUniform4iv(GLuint program, GLint location, GLsizei count, const GLint *value) {
        _programUniform4iv(program, location, count, value);
    };

    void programUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) {
        _programUniform4ui(program, location, v0, v1, v2, v3);
    };

    void programUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint *value) {
        _programUniform4uiv(program, location, count, value);
    };

    void programUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
        _programUniformMatrix2fv(program, location, count, transpose, value);
    };

    void programUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
        _programUniformMatrix2x3fv(program, location, count, transpose, value);
    };

    void programUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
        _programUniformMatrix2x4fv(program, location, count, transpose, value);
    };

    void programUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
        _programUniformMatrix3fv(program, location, count, transpose, value);
    };

    void programUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
        _programUniformMatrix3x2fv(program, location, count, transpose, value);
    };

    void programUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
        _programUniformMatrix3x4fv(program, location, count, transpose, value);
    };

    void programUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
        _programUniformMatrix4fv(program, location, count, transpose, value);
    };

    void programUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
        _programUniformMatrix4x2fv(program, location, count, transpose, value);
    };

    void programUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
        _programUniformMatrix4x3fv(program, location, count, transpose, value);
    };

    void sampleMaski(GLuint maskNumber, GLbitfield mask) {
        _sampleMaski(maskNumber, mask);
    };

    void texStorage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) {
        _texStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
    };

    void useProgramStages(GLuint pipeline, GLbitfield stages, GLuint program) {
        _useProgramStages(pipeline, stages, program);
    };

    void validateProgramPipeline(GLuint pipeline) {
        _validateProgramPipeline(pipeline);
    };

    void vertexAttribBinding(GLuint attribindex, GLuint bindingindex) {
        _vertexAttribBinding(attribindex, bindingindex);
    };

    void vertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) {
        _vertexAttribFormat(attribindex, size, type, normalized, relativeoffset);
    };

    void vertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) {
        _vertexAttribIFormat(attribindex, size, type, relativeoffset);
    };

    void vertexBindingDivisor(GLuint bindingindex, GLuint divisor) {
        _vertexBindingDivisor(bindingindex, divisor);
    };

}; // class Context


template<typename GetProcAddress>
Context::Context(GetProcAddress f) : gles30::Context(f)
{
    std::runtime_error err("getProcAddress returned nullptr");
    _activeShaderProgram = reinterpret_cast<PFNGLACTIVESHADERPROGRAMPROC>(f("glActiveShaderProgram"));
    if (!_activeShaderProgram) throw err;
    _bindImageTexture = reinterpret_cast<PFNGLBINDIMAGETEXTUREPROC>(f("glBindImageTexture"));
    if (!_bindImageTexture) throw err;
    _bindProgramPipeline = reinterpret_cast<PFNGLBINDPROGRAMPIPELINEPROC>(f("glBindProgramPipeline"));
    if (!_bindProgramPipeline) throw err;
    _bindVertexBuffer = reinterpret_cast<PFNGLBINDVERTEXBUFFERPROC>(f("glBindVertexBuffer"));
    if (!_bindVertexBuffer) throw err;
    _createShaderProgramv = reinterpret_cast<PFNGLCREATESHADERPROGRAMVPROC>(f("glCreateShaderProgramv"));
    if (!_createShaderProgramv) throw err;
    _deleteProgramPipelines = reinterpret_cast<PFNGLDELETEPROGRAMPIPELINESPROC>(f("glDeleteProgramPipelines"));
    if (!_deleteProgramPipelines) throw err;
    _dispatchCompute = reinterpret_cast<PFNGLDISPATCHCOMPUTEPROC>(f("glDispatchCompute"));
    if (!_dispatchCompute) throw err;
    _dispatchComputeIndirect = reinterpret_cast<PFNGLDISPATCHCOMPUTEINDIRECTPROC>(f("glDispatchComputeIndirect"));
    if (!_dispatchComputeIndirect) throw err;
    _drawArraysIndirect = reinterpret_cast<PFNGLDRAWARRAYSINDIRECTPROC>(f("glDrawArraysIndirect"));
    if (!_drawArraysIndirect) throw err;
    _drawElementsIndirect = reinterpret_cast<PFNGLDRAWELEMENTSINDIRECTPROC>(f("glDrawElementsIndirect"));
    if (!_drawElementsIndirect) throw err;
    _framebufferParameteri = reinterpret_cast<PFNGLFRAMEBUFFERPARAMETERIPROC>(f("glFramebufferParameteri"));
    if (!_framebufferParameteri) throw err;
    _genProgramPipelines = reinterpret_cast<PFNGLGENPROGRAMPIPELINESPROC>(f("glGenProgramPipelines"));
    if (!_genProgramPipelines) throw err;
    _getBooleani_v = reinterpret_cast<PFNGLGETBOOLEANI_VPROC>(f("glGetBooleani_v"));
    if (!_getBooleani_v) throw err;
    _getFramebufferParameteriv = reinterpret_cast<PFNGLGETFRAMEBUFFERPARAMETERIVPROC>(f("glGetFramebufferParameteriv"));
    if (!_getFramebufferParameteriv) throw err;
    _getMultisamplefv = reinterpret_cast<PFNGLGETMULTISAMPLEFVPROC>(f("glGetMultisamplefv"));
    if (!_getMultisamplefv) throw err;
    _getProgramInterfaceiv = reinterpret_cast<PFNGLGETPROGRAMINTERFACEIVPROC>(f("glGetProgramInterfaceiv"));
    if (!_getProgramInterfaceiv) throw err;
    _getProgramPipelineInfoLog = reinterpret_cast<PFNGLGETPROGRAMPIPELINEINFOLOGPROC>(f("glGetProgramPipelineInfoLog"));
    if (!_getProgramPipelineInfoLog) throw err;
    _getProgramPipelineiv = reinterpret_cast<PFNGLGETPROGRAMPIPELINEIVPROC>(f("glGetProgramPipelineiv"));
    if (!_getProgramPipelineiv) throw err;
    _getProgramResourceIndex = reinterpret_cast<PFNGLGETPROGRAMRESOURCEINDEXPROC>(f("glGetProgramResourceIndex"));
    if (!_getProgramResourceIndex) throw err;
    _getProgramResourceLocation = reinterpret_cast<PFNGLGETPROGRAMRESOURCELOCATIONPROC>(f("glGetProgramResourceLocation"));
    if (!_getProgramResourceLocation) throw err;
    _getProgramResourceName = reinterpret_cast<PFNGLGETPROGRAMRESOURCENAMEPROC>(f("glGetProgramResourceName"));
    if (!_getProgramResourceName) throw err;
    _getProgramResourceiv = reinterpret_cast<PFNGLGETPROGRAMRESOURCEIVPROC>(f("glGetProgramResourceiv"));
    if (!_getProgramResourceiv) throw err;
    _getTexLevelParameterfv = reinterpret_cast<PFNGLGETTEXLEVELPARAMETERFVPROC>(f("glGetTexLevelParameterfv"));
    if (!_getTexLevelParameterfv) throw err;
    _getTexLevelParameteriv = reinterpret_cast<PFNGLGETTEXLEVELPARAMETERIVPROC>(f("glGetTexLevelParameteriv"));
    if (!_getTexLevelParameteriv) throw err;
    _isProgramPipeline = reinterpret_cast<PFNGLISPROGRAMPIPELINEPROC>(f("glIsProgramPipeline"));
    if (!_isProgramPipeline) throw err;
    _memoryBarrier = reinterpret_cast<PFNGLMEMORYBARRIERPROC>(f("glMemoryBarrier"));
    if (!_memoryBarrier) throw err;
    _memoryBarrierByRegion = reinterpret_cast<PFNGLMEMORYBARRIERBYREGIONPROC>(f("glMemoryBarrierByRegion"));
    if (!_memoryBarrierByRegion) throw err;
    _programUniform1f = reinterpret_cast<PFNGLPROGRAMUNIFORM1FPROC>(f("glProgramUniform1f"));
    if (!_programUniform1f) throw err;
    _programUniform1fv = reinterpret_cast<PFNGLPROGRAMUNIFORM1FVPROC>(f("glProgramUniform1fv"));
    if (!_programUniform1fv) throw err;
    _programUniform1i = reinterpret_cast<PFNGLPROGRAMUNIFORM1IPROC>(f("glProgramUniform1i"));
    if (!_programUniform1i) throw err;
    _programUniform1iv = reinterpret_cast<PFNGLPROGRAMUNIFORM1IVPROC>(f("glProgramUniform1iv"));
    if (!_programUniform1iv) throw err;
    _programUniform1ui = reinterpret_cast<PFNGLPROGRAMUNIFORM1UIPROC>(f("glProgramUniform1ui"));
    if (!_programUniform1ui) throw err;
    _programUniform1uiv = reinterpret_cast<PFNGLPROGRAMUNIFORM1UIVPROC>(f("glProgramUniform1uiv"));
    if (!_programUniform1uiv) throw err;
    _programUniform2f = reinterpret_cast<PFNGLPROGRAMUNIFORM2FPROC>(f("glProgramUniform2f"));
    if (!_programUniform2f) throw err;
    _programUniform2fv = reinterpret_cast<PFNGLPROGRAMUNIFORM2FVPROC>(f("glProgramUniform2fv"));
    if (!_programUniform2fv) throw err;
    _programUniform2i = reinterpret_cast<PFNGLPROGRAMUNIFORM2IPROC>(f("glProgramUniform2i"));
    if (!_programUniform2i) throw err;
    _programUniform2iv = reinterpret_cast<PFNGLPROGRAMUNIFORM2IVPROC>(f("glProgramUniform2iv"));
    if (!_programUniform2iv) throw err;
    _programUniform2ui = reinterpret_cast<PFNGLPROGRAMUNIFORM2UIPROC>(f("glProgramUniform2ui"));
    if (!_programUniform2ui) throw err;
    _programUniform2uiv = reinterpret_cast<PFNGLPROGRAMUNIFORM2UIVPROC>(f("glProgramUniform2uiv"));
    if (!_programUniform2uiv) throw err;
    _programUniform3f = reinterpret_cast<PFNGLPROGRAMUNIFORM3FPROC>(f("glProgramUniform3f"));
    if (!_programUniform3f) throw err;
    _programUniform3fv = reinterpret_cast<PFNGLPROGRAMUNIFORM3FVPROC>(f("glProgramUniform3fv"));
    if (!_programUniform3fv) throw err;
    _programUniform3i = reinterpret_cast<PFNGLPROGRAMUNIFORM3IPROC>(f("glProgramUniform3i"));
    if (!_programUniform3i) throw err;
    _programUniform3iv = reinterpret_cast<PFNGLPROGRAMUNIFORM3IVPROC>(f("glProgramUniform3iv"));
    if (!_programUniform3iv) throw err;
    _programUniform3ui = reinterpret_cast<PFNGLPROGRAMUNIFORM3UIPROC>(f("glProgramUniform3ui"));
    if (!_programUniform3ui) throw err;
    _programUniform3uiv = reinterpret_cast<PFNGLPROGRAMUNIFORM3UIVPROC>(f("glProgramUniform3uiv"));
    if (!_programUniform3uiv) throw err;
    _programUniform4f = reinterpret_cast<PFNGLPROGRAMUNIFORM4FPROC>(f("glProgramUniform4f"));
    if (!_programUniform4f) throw err;
    _programUniform4fv = reinterpret_cast<PFNGLPROGRAMUNIFORM4FVPROC>(f("glProgramUniform4fv"));
    if (!_programUniform4fv) throw err;
    _programUniform4i = reinterpret_cast<PFNGLPROGRAMUNIFORM4IPROC>(f("glProgramUniform4i"));
    if (!_programUniform4i) throw err;
    _programUniform4iv = reinterpret_cast<PFNGLPROGRAMUNIFORM4IVPROC>(f("glProgramUniform4iv"));
    if (!_programUniform4iv) throw err;
    _programUniform4ui = reinterpret_cast<PFNGLPROGRAMUNIFORM4UIPROC>(f("glProgramUniform4ui"));
    if (!_programUniform4ui) throw err;
    _programUniform4uiv = reinterpret_cast<PFNGLPROGRAMUNIFORM4UIVPROC>(f("glProgramUniform4uiv"));
    if (!_programUniform4uiv) throw err;
    _programUniformMatrix2fv = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2FVPROC>(f("glProgramUniformMatrix2fv"));
    if (!_programUniformMatrix2fv) throw err;
    _programUniformMatrix2x3fv = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC>(f("glProgramUniformMatrix2x3fv"));
    if (!_programUniformMatrix2x3fv) throw err;
    _programUniformMatrix2x4fv = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC>(f("glProgramUniformMatrix2x4fv"));
    if (!_programUniformMatrix2x4fv) throw err;
    _programUniformMatrix3fv = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3FVPROC>(f("glProgramUniformMatrix3fv"));
    if (!_programUniformMatrix3fv) throw err;
    _programUniformMatrix3x2fv = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC>(f("glProgramUniformMatrix3x2fv"));
    if (!_programUniformMatrix3x2fv) throw err;
    _programUniformMatrix3x4fv = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC>(f("glProgramUniformMatrix3x4fv"));
    if (!_programUniformMatrix3x4fv) throw err;
    _programUniformMatrix4fv = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4FVPROC>(f("glProgramUniformMatrix4fv"));
    if (!_programUniformMatrix4fv) throw err;
    _programUniformMatrix4x2fv = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC>(f("glProgramUniformMatrix4x2fv"));
    if (!_programUniformMatrix4x2fv) throw err;
    _programUniformMatrix4x3fv = reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC>(f("glProgramUniformMatrix4x3fv"));
    if (!_programUniformMatrix4x3fv) throw err;
    _sampleMaski = reinterpret_cast<PFNGLSAMPLEMASKIPROC>(f("glSampleMaski"));
    if (!_sampleMaski) throw err;
    _texStorage2DMultisample = reinterpret_cast<PFNGLTEXSTORAGE2DMULTISAMPLEPROC>(f("glTexStorage2DMultisample"));
    if (!_texStorage2DMultisample) throw err;
    _useProgramStages = reinterpret_cast<PFNGLUSEPROGRAMSTAGESPROC>(f("glUseProgramStages"));
    if (!_useProgramStages) throw err;
    _validateProgramPipeline = reinterpret_cast<PFNGLVALIDATEPROGRAMPIPELINEPROC>(f("glValidateProgramPipeline"));
    if (!_validateProgramPipeline) throw err;
    _vertexAttribBinding = reinterpret_cast<PFNGLVERTEXATTRIBBINDINGPROC>(f("glVertexAttribBinding"));
    if (!_vertexAttribBinding) throw err;
    _vertexAttribFormat = reinterpret_cast<PFNGLVERTEXATTRIBFORMATPROC>(f("glVertexAttribFormat"));
    if (!_vertexAttribFormat) throw err;
    _vertexAttribIFormat = reinterpret_cast<PFNGLVERTEXATTRIBIFORMATPROC>(f("glVertexAttribIFormat"));
    if (!_vertexAttribIFormat) throw err;
    _vertexBindingDivisor = reinterpret_cast<PFNGLVERTEXBINDINGDIVISORPROC>(f("glVertexBindingDivisor"));
    if (!_vertexBindingDivisor) throw err;
}

} // namespace gles31
} // namespace pyk
#endif
