//
// Created by lijf on 2016/4/1.
//

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include <android/log.h>

#ifndef LOG_TAG
#define LOG_TAG "ANDROID_LAB"
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)
#endif

/* Header for class org_kingfeng_ndkdemo_MainActivity */

#ifndef _Included_org_kingfeng_ndkdemo_MainActivity
#define _Included_org_kingfeng_ndkdemo_MainActivity
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class: org_kingfeng_ndkdemo_MainActivity
 * Method: getStringFromNative
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_kingfeng_ndkdemo_MainActivity_getStringFromNative
        (JNIEnv * env, jobject jObj){
    LOGE("log string from ndk.");
    return (*env)->NewStringUTF(env,"Hello From JNI.");
}

#ifdef __cplusplus
}
#endif
#endif