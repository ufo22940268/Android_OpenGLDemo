#include <jni.h>
#include <android/log.h>

#include <GLES/gl.h>
#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>
#include <stdio.h>

#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, "renderer", __VA_ARGS__) 

void setupPoints() {
/*    [>glEnableClientState(GL_VERTEX_ARRAY);<]*/

    /*int vertexs[] = {*/
        /*-80, -80,*/
        /*-80, 80,*/
        /*80, 80,*/
        /*80, -80,*/
    /*};*/
    /*[>glVertexPoints(2, GLint, sizeof(int)*2, vertexs);<]*/
    /*glBindBuffer(GL_ARRAY_BUFFER, vertexs);*/
    /*glEnableVertexAttribArray(0);*/
    /*glVertexAttribPointer(0, 2, GLint, GL_FALSE, sizeof(int)*2, 0);*/
}

void
Java_opengl_demo_MyRenderer_init(JNIEnv *env, jobject thiz, int width, int height) {
/*    LOGD("init");*/

    /*glViewport(0, 0, width, height);*/

    /*[>glMatrixMode(GL_PROJECTION);<]*/
    /*glOthorx(-100, 100, -100, 100, -10, 10);*/

    /*[>glMatrixMode(GL_MODELVIEW);<]*/
    /*glClearColor(0, 0, 0, 1);*/

    /*setupPoints();*/
    glMatrixMode(GL_PROJECTION);
}

void
Java_opengl_demo_MyRenderer_step(JNIEnv *env, jobject thiz) {
/*    LOGD("step");*/
    /*glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);*/

    /*glColor4f(0, 1, 0, 1);*/
    /*glDrawArrays(GL_LINE_LOOP, 0, 4);*/
}
