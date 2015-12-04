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
#include "../../native/include/org_zeromq_czmq_Zdir.h"

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zdir__1_1new (JNIEnv *env, jclass c, jstring path, jstring parent)
{
    char *path_ = (char *) (*env)->GetStringUTFChars (env, path, NULL);
    char *parent_ = (char *) (*env)->GetStringUTFChars (env, parent, NULL);
    jlong new_ = (jlong) zdir_new (path_, parent_);
    (*env)->ReleaseStringUTFChars (env, path, path_);
    (*env)->ReleaseStringUTFChars (env, parent, parent_);
    return new_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zdir__1_1destroy (JNIEnv *env, jclass c, jlong self_p)
{
    zdir_destroy ((zdir_t **) &self_p);
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_czmq_Zdir__1_1path (JNIEnv *env, jclass c, jlong self)
{
    char *path_ = (char *) zdir_path ((zdir_t *) self);
    jstring string = (*env)->NewStringUTF (env, path_);
    return string;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zdir__1_1modified (JNIEnv *env, jclass c, jlong self)
{
    jlong modified_ = (jlong) zdir_modified ((zdir_t *) self);
    return modified_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zdir__1_1cursize (JNIEnv *env, jclass c, jlong self)
{
    jlong cursize_ = (jlong) zdir_cursize ((zdir_t *) self);
    return cursize_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zdir__1_1count (JNIEnv *env, jclass c, jlong self)
{
    jlong count_ = (jlong) zdir_count ((zdir_t *) self);
    return count_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zdir__1_1list (JNIEnv *env, jclass c, jlong self)
{
    jlong list_ = (jlong) zdir_list ((zdir_t *) self);
    return list_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zdir__1_1remove (JNIEnv *env, jclass c, jlong self, jboolean force)
{
    zdir_remove ((zdir_t *) self, (bool) force);
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zdir__1_1diff (JNIEnv *env, jclass c, jlong older, jlong newer, jstring alias)
{
    char *alias_ = (char *) (*env)->GetStringUTFChars (env, alias, NULL);
    jlong diff_ = (jlong) zdir_diff ((zdir_t *) older, (zdir_t *) newer, alias_);
    (*env)->ReleaseStringUTFChars (env, alias, alias_);
    return diff_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zdir__1_1resync (JNIEnv *env, jclass c, jlong self, jstring alias)
{
    char *alias_ = (char *) (*env)->GetStringUTFChars (env, alias, NULL);
    jlong resync_ = (jlong) zdir_resync ((zdir_t *) self, alias_);
    (*env)->ReleaseStringUTFChars (env, alias, alias_);
    return resync_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zdir__1_1cache (JNIEnv *env, jclass c, jlong self)
{
    jlong cache_ = (jlong) zdir_cache ((zdir_t *) self);
    return cache_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zdir__1_1print (JNIEnv *env, jclass c, jlong self, jint indent)
{
    zdir_print ((zdir_t *) self, (int) indent);
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zdir__1_1watch (JNIEnv *env, jclass c, jlong pipe, jlong unused)
{
    zdir_watch ((zsock_t *) pipe, (void *) unused);
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zdir__1_1test (JNIEnv *env, jclass c, jboolean verbose)
{
    zdir_test ((bool) verbose);
}

