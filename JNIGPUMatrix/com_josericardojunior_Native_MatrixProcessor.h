/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_josericardojunior_Native_MatrixProcessor */

#ifndef _Included_com_josericardojunior_Native_MatrixProcessor
#define _Included_com_josericardojunior_Native_MatrixProcessor
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_josericardojunior_Native_MatrixProcessor
 * Method:    CPUMatMult
 * Signature: ([F[FIII)[F
 */
JNIEXPORT jfloatArray JNICALL Java_com_josericardojunior_Native_MatrixProcessor_CPUMatMult
  (JNIEnv *, jclass, jfloatArray, jfloatArray, jint, jint, jint);

/*
 * Class:     com_josericardojunior_Native_MatrixProcessor
 * Method:    GPUMatMult
 * Signature: ([F[FIII)[F
 */
JNIEXPORT jfloatArray JNICALL Java_com_josericardojunior_Native_MatrixProcessor_GPUMatMult
  (JNIEnv *, jclass, jfloatArray, jfloatArray, jint, jint, jint);

/*
 * Class:     com_josericardojunior_Native_MatrixProcessor
 * Method:    GPUStandardScore
 * Signature: ([FIII[F)[F
 */
JNIEXPORT jfloatArray JNICALL Java_com_josericardojunior_Native_MatrixProcessor_GPUStandardScore
  (JNIEnv *, jclass, jfloatArray, jint, jint, jint, jfloatArray);

/*
 * Class:     com_josericardojunior_Native_MatrixProcessor
 * Method:    CPUStandardScore
 * Signature: ([FIII[F)[F
 */
JNIEXPORT jfloatArray JNICALL Java_com_josericardojunior_Native_MatrixProcessor_CPUStandardScore
  (JNIEnv *, jclass, jfloatArray, jint, jint, jint, jfloatArray);

/*
 * Class:     com_josericardojunior_Native_MatrixProcessor
 * Method:    GPUMeanSD
 * Signature: ([FIIIZ)[F
 */
JNIEXPORT jfloatArray JNICALL Java_com_josericardojunior_Native_MatrixProcessor_GPUMeanSD
  (JNIEnv *, jclass, jfloatArray, jint, jint, jint, jboolean);

/*
 * Class:     com_josericardojunior_Native_MatrixProcessor
 * Method:    CPUMeanSD
 * Signature: ([FIIIZ)[F
 */
JNIEXPORT jfloatArray JNICALL Java_com_josericardojunior_Native_MatrixProcessor_CPUMeanSD
  (JNIEnv *, jclass, jfloatArray, jint, jint, jint, jboolean);

/*
 * Class:     com_josericardojunior_Native_MatrixProcessor
 * Method:    resetGPU
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_josericardojunior_Native_MatrixProcessor_resetGPU
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_josericardojunior_Native_MatrixProcessor
 * Method:    createMatrixData
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_com_josericardojunior_Native_MatrixProcessor_createMatrixData
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_josericardojunior_Native_MatrixProcessor
 * Method:    setData
 * Signature: (J[I[I[F)V
 */
JNIEXPORT void JNICALL Java_com_josericardojunior_Native_MatrixProcessor_setData
  (JNIEnv *, jclass, jlong, jintArray, jintArray, jfloatArray);

/*
 * Class:     com_josericardojunior_Native_MatrixProcessor
 * Method:    getNonZeroData
 * Signature: (J)[Lcom/josericardojunior/Native/java_to_c_info;
 */
JNIEXPORT jobjectArray JNICALL Java_com_josericardojunior_Native_MatrixProcessor_getNonZeroData
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_josericardojunior_Native_MatrixProcessor
 * Method:    deleteMatrixData
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_josericardojunior_Native_MatrixProcessor_deleteMatrixData
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_josericardojunior_Native_MatrixProcessor
 * Method:    getMin
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_josericardojunior_Native_MatrixProcessor_getMin
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_josericardojunior_Native_MatrixProcessor
 * Method:    getMax
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_josericardojunior_Native_MatrixProcessor_getMax
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_josericardojunior_Native_MatrixProcessor
 * Method:    meanSD
 * Signature: (JJZ)V
 */
JNIEXPORT void JNICALL Java_com_josericardojunior_Native_MatrixProcessor_meanSD
  (JNIEnv *, jclass, jlong, jlong, jboolean);

/*
 * Class:     com_josericardojunior_Native_MatrixProcessor
 * Method:    standard_deviation
 * Signature: (JJZ)V
 */
JNIEXPORT void JNICALL Java_com_josericardojunior_Native_MatrixProcessor_standard_1deviation
  (JNIEnv *, jclass, jlong, jlong, jboolean);

/*
 * Class:     com_josericardojunior_Native_MatrixProcessor
 * Method:    standard_score
 * Signature: (JJZ)V
 */
JNIEXPORT void JNICALL Java_com_josericardojunior_Native_MatrixProcessor_standard_1score
  (JNIEnv *, jclass, jlong, jlong, jboolean);

/*
 * Class:     com_josericardojunior_Native_MatrixProcessor
 * Method:    multiply
 * Signature: (JJJZ)V
 */
JNIEXPORT void JNICALL Java_com_josericardojunior_Native_MatrixProcessor_multiply
  (JNIEnv *, jclass, jlong, jlong, jlong, jboolean);

/*
 * Class:     com_josericardojunior_Native_MatrixProcessor
 * Method:    transpose
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_josericardojunior_Native_MatrixProcessor_transpose
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_josericardojunior_Native_MatrixProcessor
 * Method:    reduceRow
 * Signature: (JJZ)V
 */
JNIEXPORT void JNICALL Java_com_josericardojunior_Native_MatrixProcessor_reduceRow
  (JNIEnv *, jclass, jlong, jlong, jboolean);

/*
 * Class:     com_josericardojunior_Native_MatrixProcessor
 * Method:    confidence
 * Signature: (JJZ)V
 */
JNIEXPORT void JNICALL Java_com_josericardojunior_Native_MatrixProcessor_confidence
  (JNIEnv *, jclass, jlong, jlong, jboolean);

/*
 * Class:     com_josericardojunior_Native_MatrixProcessor
 * Method:    isGPUEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_josericardojunior_Native_MatrixProcessor_isGPUEnabled
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
