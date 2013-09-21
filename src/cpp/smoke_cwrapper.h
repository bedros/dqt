#ifndef __SMOKE_CWRAPPER_H_
#define __SMOKE_CWRAPPER_H_

#if defined(_WIN32)
    #if defined(smoke_cwrapper_EXPORTS)
        #define SMOKEC_SPEC __declspec(dllexport)
    #else
        #define SMOKEC_SPEC __declspec(dllimport)
    #endif
#else
    #define SMOKEC_SPEC
#endif

#ifdef __cplusplus
extern "C" {
#endif

SMOKEC_SPEC void dqt_init_qtcore_Smoke();
SMOKEC_SPEC void dqt_delete_qtcore_Smoke();
SMOKEC_SPEC void* dqt_fetch_qtcore_Smoke();
SMOKEC_SPEC void dqt_init_qtgui_Smoke();
SMOKEC_SPEC void dqt_delete_qtgui_Smoke();
SMOKEC_SPEC void* dqt_fetch_qtgui_Smoke();

SMOKEC_SPEC void dqt_call_ClassFn(void* classFn, short method, void* obj, void* args);
SMOKEC_SPEC void* dqt_call_CastFn(void* castFn, void* obj, short from, short to);
SMOKEC_SPEC void dqt_call_EnumFn(void* enumFn, int enumOperation, short index, void** ptrRef, long* longRef);

#ifdef __cplusplus
}
#endif

#endif