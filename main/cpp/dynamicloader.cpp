#include <jni.h>
#include <string>

using namespace std;
#include <android/log.h>

//extern "C" JNIEXPORT void JNICALL
//Java_com_example__project_Utility_loadLib(
//        JNIEnv* env,
//        jobject, jstring libPath) {
//
//    const char* functionName = __func__;
//    __android_log_print(ANDROID_LOG_INFO, "NativeTag", "Function Name: %s", functionName);
//
//
//    const char* param = env->GetStringUTFChars(libPath, NULL);
//    __android_log_print(ANDROID_LOG_INFO, "NativeTag", "Parameter is : %s", param);
//
//    env->ReleaseStringUTFChars(libPath, param);
//}
//
//extern "C"
//JNIEXPORT void JNICALL
//Java_com_example__project_Utility_unloadLib(JNIEnv *env, jobject thiz, jstring libPath) {
//    const char* functionName = __func__;
//    __android_log_print(ANDROID_LOG_INFO, "NativeTag", "Function Name: %s", functionName);
//
//
//    const char* param = env->GetStringUTFChars(libPath, NULL);
//    __android_log_print(ANDROID_LOG_INFO, "NativeTag", "Parameter is : %s", param);
//
//    env->ReleaseStringUTFChars(libPath, param);
//}

extern "C"
JNIEXPORT void JNICALL
Java_com_example__1project_Utility_loadLib(JNIEnv *env, jobject thiz, jstring lib_path) {
    const char* functionName = __func__;
    __android_log_print(ANDROID_LOG_INFO, "NativeTag", "Function Name: %s", functionName);


    const char* param = env->GetStringUTFChars(lib_path, NULL);
    __android_log_print(ANDROID_LOG_INFO, "NativeTag", "Parameter is : %s", param);

    env->ReleaseStringUTFChars(lib_path, param);
}
extern "C"
JNIEXPORT void JNICALL
Java_com_example__1project_Utility_unloadLib(JNIEnv *env, jobject thiz, jstring lib_path) {
    const char* functionName = __func__;
    __android_log_print(ANDROID_LOG_INFO, "NativeTag", "Function Name: %s", functionName);


    const char* param = env->GetStringUTFChars(lib_path, NULL);
    __android_log_print(ANDROID_LOG_INFO, "NativeTag", "Parameter is : %s", param);

    env->ReleaseStringUTFChars(lib_path, param);
}
