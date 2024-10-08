/**
 * Copyright 2021-2024, XGBoost Contributors
 */
#ifndef XGBOOST_USE_CUDA

#include <jni.h>

#include "../../../../src/common/common.h"
#include "../../../../src/c_api/c_api_error.h"

namespace xgboost {
namespace jni {
XGB_DLL int XGDeviceQuantileDMatrixCreateFromCallbackImpl(JNIEnv *jenv, jclass jcls,
                                                          jobject jiter,
                                                          jfloat jmissing,
                                                          jint jmax_bin, jint jnthread,
                                                          jlongArray jout) {
  API_BEGIN();
  common::AssertGPUSupport();
  API_END();
}
XGB_DLL int XGQuantileDMatrixCreateFromCallbackImpl(JNIEnv *jenv, jclass jcls,
                                                    jobject jdata_iter, jlongArray jref,
                                                    char const *config, jlongArray jout) {
  API_BEGIN();
  common::AssertGPUSupport();
  API_END();
}
} // namespace jni
} // namespace xgboost
#endif  // XGBOOST_USE_CUDA
