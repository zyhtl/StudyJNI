#include<jni.h>
#include <stdio.h>
#include "com_hwz_java_HelloJNI.h"

JNIEXPORT void JNICALL Java_com_hwz_java_HelloJNI_sayHello(JNIEnv *env, jobject thisObj) {
   printf("Hello World ~~\n");
   return;
}