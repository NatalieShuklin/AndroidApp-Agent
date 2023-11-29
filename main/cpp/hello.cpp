#include <jni.h>
#include <string>
#include <iostream>
using namespace std;
#include <android/log.h>




__attribute__((constructor))
int main(){
    cout << "hellllllllllllllo";
//    __android_log_write(ANDROID_LOG_INFO, "libhello", "libhello was loaded");
}