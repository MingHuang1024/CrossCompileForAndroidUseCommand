#include <jni.h>
#include <android/log.h>

#ifndef _Included_com_jni_MyJni
#define _Included_com_jni_MyJni
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_jni_MyJni
 * Method:    callNative
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_jni_MyJni_callNative
  (JNIEnv * env, jobject obj){
      __android_log_print(ANDROID_LOG_DEBUG,"Native.c","Hello! I am in native.\n");
    int i = 9;
    return (jint)i;  
  }

#ifdef __cplusplus
}
#endif
#endif
