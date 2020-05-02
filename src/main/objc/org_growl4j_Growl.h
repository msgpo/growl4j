/*
 * growl4j, the OpenSource Java Solution for using Growl.
 * Maintained by the Jitsi community (http://jitsi.org).
 *
 * Copyright @ 2015 Atlassian Pty Ltd
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_growl4j_Growl */

#ifndef _Included_org_growl4j_Growl
#define _Included_org_growl4j_Growl
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_growl4j_Growl
 * Method:    isGrowlRunning
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_growl4j_Growl_isGrowlRunning
  (JNIEnv *, jclass);

/*
 * Class:     org_growl4j_Growl
 * Method:    getAppToFront
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_growl4j_Growl_getAppToFront
  (JNIEnv *, jobject);

/*
 * Class:     org_growl4j_Growl
 * Method:    showGrowlMessage
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[BJ)V
 */
JNIEXPORT void JNICALL Java_org_growl4j_Growl_showGrowlMessage
  (JNIEnv *, jobject, jstring, jstring, jstring, jbyteArray, jlong);

/*
 * Class:     org_growl4j_Growl
 * Method:    registerWithGrowlDaemon
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_growl4j_Growl_registerWithGrowlDaemon
  (JNIEnv *, jobject);

/*
 * Class:     org_growl4j_Growl
 * Method:    doFinalCleanUp
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_growl4j_Growl_doFinalCleanUp
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif