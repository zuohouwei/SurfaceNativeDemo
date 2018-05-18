//
// Created by jay on 18-5-15.
//

#ifndef SURFACENATIVEDEMO_FONTTEXTURE_H
#define SURFACENATIVEDEMO_FONTTEXTURE_H

#include <GLES2/gl2.h>
#include <string>
// glm
#include <glm/vec3.hpp>
#include <glm/detail/type_mat.hpp>
#include <glm/detail/type_mat4x4.hpp>
// freetype
#include <ft2build.h>
#include FT_FREETYPE_H

#include "AbsTextureProgram.h"
#include <Font.h>

namespace egl {

    class FontTextureProgram : public AbsTextureProgram {

    public:
        FontTextureProgram(const char *fontPath);

        ~FontTextureProgram() override;

        void resize(float width, float height) override ;

        void setColor(int color);

        void setTextSize(float size);

        void renderText(std::string text, float x, float y);

    private:
        GLuint mEglProgram;
        GLint mProjectionLoc;
        GLint mTextColorLoc;
        GLint mVertexLoc;

        Font *mFont;
        GLfloat mScale;
    };

};


#endif //SURFACENATIVEDEMO_FONTTEXTURE_H