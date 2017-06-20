#include <com_example_stone_myapplication_MainActivity.h>
JNIEXPORT jstring JNICALL Java_com_example_stone_myapplication_MainActivity_getWord
  (JNIEnv *env, jclass jobj) {
    return (*env)->NewStringUTF(env,"Hello JNI!");
}

