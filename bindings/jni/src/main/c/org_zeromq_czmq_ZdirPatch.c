/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
#include <stdio.h>
#include <stdlib.h>
#include <jni.h>
#include "czmq.h"
#include "../../native/include/org_zeromq_czmq_ZdirPatch.h"

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_ZdirPatch__1_1new (JNIEnv *env, jclass c, jstring path, jlong file, jint op, jstring alias)
{
    char *path_ = (char *) (*env)->GetStringUTFChars (env, path, NULL);
    char *alias_ = (char *) (*env)->GetStringUTFChars (env, alias, NULL);
    jlong new_ = (jlong) zdir_patch_new (path_, (zfile_t *) file, (zdir_patch_op_t) op, alias_);
    (*env)->ReleaseStringUTFChars (env, path, path_);
    (*env)->ReleaseStringUTFChars (env, alias, alias_);
    return new_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_ZdirPatch__1_1destroy (JNIEnv *env, jclass c, jlong self_p)
{
    zdir_patch_destroy ((zdir_patch_t **) &self_p);
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_ZdirPatch__1_1dup (JNIEnv *env, jclass c, jlong self)
{
    jlong dup_ = (jlong) zdir_patch_dup ((zdir_patch_t *) self);
    return dup_;
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_czmq_ZdirPatch__1_1path (JNIEnv *env, jclass c, jlong self)
{
    char *path_ = (char *) zdir_patch_path ((zdir_patch_t *) self);
    jstring string = (*env)->NewStringUTF (env, path_);
    return string;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_ZdirPatch__1_1file (JNIEnv *env, jclass c, jlong self)
{
    jlong file_ = (jlong) zdir_patch_file ((zdir_patch_t *) self);
    return file_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_czmq_ZdirPatch__1_1op (JNIEnv *env, jclass c, jlong self)
{
    jint op_ = (jint) zdir_patch_op ((zdir_patch_t *) self);
    return op_;
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_czmq_ZdirPatch__1_1vpath (JNIEnv *env, jclass c, jlong self)
{
    char *vpath_ = (char *) zdir_patch_vpath ((zdir_patch_t *) self);
    jstring string = (*env)->NewStringUTF (env, vpath_);
    return string;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_ZdirPatch__1_1digest_set (JNIEnv *env, jclass c, jlong self)
{
    zdir_patch_digest_set ((zdir_patch_t *) self);
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_czmq_ZdirPatch__1_1digest (JNIEnv *env, jclass c, jlong self)
{
    char *digest_ = (char *) zdir_patch_digest ((zdir_patch_t *) self);
    jstring string = (*env)->NewStringUTF (env, digest_);
    return string;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_ZdirPatch__1_1test (JNIEnv *env, jclass c, jboolean verbose)
{
    zdir_patch_test ((bool) verbose);
}

