/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_intel_gkl_pairhmm_IntelPairHmm */

#ifndef _Included_com_intel_gkl_pairhmm_IntelPairHmm
#define _Included_com_intel_gkl_pairhmm_IntelPairHmm
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_intel_gkl_pairhmm_IntelPairHmm
 * Method:    initNative
 * Signature: (Ljava/lang/Class;Ljava/lang/Class;ZIZ)V
 */
JNIEXPORT void JNICALL Java_com_intel_gkl_pairhmm_IntelPairHmm_initNative
(JNIEnv *, jclass, jclass, jclass, jboolean, jint, jboolean);

/*
 * Class:     com_intel_gkl_pairhmm_IntelPairHmm
 * Method:    computeLikelihoodsNative
 * Signature: ([Ljava/lang/Object;[Ljava/lang/Object;[D)V
 */
JNIEXPORT void JNICALL Java_com_intel_gkl_pairhmm_IntelPairHmm_computeLikelihoodsNative
  (JNIEnv *, jobject, jobjectArray, jobjectArray, jdoubleArray);

/*
 * Class:     com_intel_gkl_pairhmm_IntelPairHmm
 * Method:    doneNative
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_intel_gkl_pairhmm_IntelPairHmm_doneNative
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
