package opengl.demo;

import android.util.*;
import android.widget.*;
import android.view.*;
import android.content.*;
import android.app.*;
import android.os.*;
import android.database.*;
import android.net.*;
import android.opengl.*;
import android.opengl.*;

import java.util.*;
import java.nio.*;
import javax.microedition.khronos.opengles.*;
import javax.microedition.khronos.egl.*;

public class MyRenderer implements GLSurfaceView.Renderer  {
    @Override
    public void onDrawFrame(GL10 gl) {
        gl.glClear(GL10.GL_COLOR_BUFFER_BIT | GL10.GL_DEPTH_BUFFER_BIT);

        gl.glColor4f(1, 0, 0, 1);

        gl.glDrawArrays(GL10.GL_LINE_LOOP, 0, 4);
    }

    @Override
    public void onSurfaceChanged(GL10 gl, int width, int height) {
        gl.glViewport(0, 0, width, height);

        gl.glMatrixMode(GL10.GL_PROJECTION);
        gl.glOrthox(-100, 100, -100, 100, -10, 10);

        gl.glMatrixMode(GL10.GL_MODELVIEW);
    }

    @Override
    public void onSurfaceCreated(GL10 gl, EGLConfig config) {
        gl.glClearColor(1, 1, 1, 1);
        setupPoints(gl);

        //test
        init(1, 1);
        step();
    }

    private void setupPoints(GL10 gl) {
        gl.glEnableClientState(GL10.GL_VERTEX_ARRAY);

        int[] matrix = {
            -50, -50,
            -50, 50,
            50, 50,
            50, -50,
        };
        IntBuffer buffer = IntBuffer.wrap(matrix);

        gl.glVertexPointer(2, GL10.GL_FIXED, 4*2, buffer);
    }

    public native void init(int width, int height);
    public native void step();

    static {
        System.loadLibrary("render");
    }
}

