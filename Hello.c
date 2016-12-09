#include <jni.h>
#include <Hello.h>
#include <stdlib.h>
#include <unistd.h>

JNIEXPORT void JNICALL Java_Hello_mallocMe (JNIEnv *env, jobject obj) {
    int *arr;
    arr = calloc (1024*1024, sizeof(int)); // 1G of ints
    sleep(60);
}
