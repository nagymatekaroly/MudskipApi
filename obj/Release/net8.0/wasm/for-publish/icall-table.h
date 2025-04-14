#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
174,
184,
185,
186,
187,
188,
189,
190,
191,
192,
195,
196,
297,
298,
299,
328,
329,
330,
350,
351,
352,
353,
450,
451,
452,
455,
490,
491,
493,
495,
497,
499,
504,
512,
513,
514,
515,
516,
517,
518,
519,
520,
613,
614,
680,
686,
689,
691,
696,
697,
699,
700,
704,
705,
707,
709,
710,
713,
714,
715,
718,
720,
723,
725,
727,
736,
800,
802,
804,
814,
815,
816,
817,
819,
826,
827,
828,
829,
830,
838,
839,
840,
844,
845,
847,
851,
852,
853,
1132,
1310,
1311,
7202,
7203,
7205,
7206,
7207,
7208,
7209,
7211,
7213,
7215,
7225,
7227,
7232,
7234,
7236,
7238,
7289,
7290,
7292,
7293,
7294,
7295,
7296,
7298,
7300,
8217,
8221,
8223,
8224,
8225,
8226,
8475,
8476,
8477,
8478,
8496,
8497,
8498,
8500,
8542,
8608,
8610,
8612,
8620,
8621,
8622,
8623,
9018,
9022,
9023,
9050,
9068,
9075,
9082,
9093,
9097,
9117,
9191,
9193,
9202,
9204,
9205,
9212,
9226,
9246,
9247,
9255,
9257,
9264,
9265,
9268,
9270,
9275,
9281,
9282,
9289,
9291,
9303,
9306,
9307,
9308,
9319,
9328,
9334,
9335,
9336,
9338,
9339,
9356,
9358,
9372,
9389,
9416,
9446,
9447,
9887,
9979,
9980,
10182,
10183,
10190,
10191,
10192,
10197,
10272,
10660,
10661,
10877,
10887,
11640,
11661,
11663,
11665,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_IsValueOfElementTypeInternal (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 174,
ves_icall_System_Array_InternalCreate,
// token 184,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 185,
ves_icall_System_Array_IsValueOfElementTypeInternal,
// token 186,
ves_icall_System_Array_CanChangePrimitive,
// token 187,
ves_icall_System_Array_FastCopy,
// token 188,
ves_icall_System_Array_GetLengthInternal_raw,
// token 189,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 190,
ves_icall_System_Array_GetGenericValue_icall,
// token 191,
ves_icall_System_Array_GetValueImpl_raw,
// token 192,
ves_icall_System_Array_SetGenericValue_icall,
// token 195,
ves_icall_System_Array_SetValueImpl_raw,
// token 196,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 297,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 298,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 299,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 328,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 329,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 330,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 350,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 351,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 352,
ves_icall_System_Enum_InternalGetCorElementType,
// token 353,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 450,
ves_icall_System_Environment_get_ProcessorCount,
// token 451,
ves_icall_System_Environment_get_TickCount,
// token 452,
ves_icall_System_Environment_get_TickCount64,
// token 455,
ves_icall_System_Environment_FailFast_raw,
// token 490,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 491,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 493,
ves_icall_System_GC_SuppressFinalize_raw,
// token 495,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 497,
ves_icall_System_GC_GetGCMemoryInfo,
// token 499,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 504,
ves_icall_System_Object_MemberwiseClone_raw,
// token 512,
ves_icall_System_Math_Ceiling,
// token 513,
ves_icall_System_Math_Cos,
// token 514,
ves_icall_System_Math_Floor,
// token 515,
ves_icall_System_Math_Log10,
// token 516,
ves_icall_System_Math_Pow,
// token 517,
ves_icall_System_Math_Sin,
// token 518,
ves_icall_System_Math_Sqrt,
// token 519,
ves_icall_System_Math_Tan,
// token 520,
ves_icall_System_Math_ModF,
// token 613,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 614,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 680,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 686,
ves_icall_RuntimeType_make_array_type_raw,
// token 689,
ves_icall_RuntimeType_make_byref_type_raw,
// token 691,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 696,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 697,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 699,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 700,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 704,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 705,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 707,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 709,
ves_icall_System_RuntimeType_getFullName_raw,
// token 710,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 713,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 714,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 715,
ves_icall_RuntimeType_GetFields_native_raw,
// token 718,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 720,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 723,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 725,
ves_icall_RuntimeType_GetName_raw,
// token 727,
ves_icall_RuntimeType_GetNamespace_raw,
// token 736,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 800,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 802,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 804,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 814,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 815,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 816,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 817,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 819,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 826,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 827,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 828,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 829,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 830,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 838,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 839,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 840,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 844,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 845,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 847,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 851,
ves_icall_System_String_FastAllocateString_raw,
// token 852,
ves_icall_System_String_InternalIsInterned_raw,
// token 853,
ves_icall_System_String_InternalIntern_raw,
// token 1132,
ves_icall_System_Type_internal_from_handle_raw,
// token 1310,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1311,
ves_icall_System_ValueType_Equals_raw,
// token 7202,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 7203,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 7205,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 7206,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 7207,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 7208,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 7209,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 7211,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 7213,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 7215,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 7225,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 7227,
mono_monitor_exit_icall_raw,
// token 7232,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 7234,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 7236,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 7238,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 7289,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 7290,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 7292,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 7293,
ves_icall_System_Threading_Thread_GetState_raw,
// token 7294,
ves_icall_System_Threading_Thread_SetState_raw,
// token 7295,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 7296,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 7298,
ves_icall_System_Threading_Thread_YieldInternal,
// token 7300,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 8217,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 8221,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 8223,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 8224,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 8225,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 8226,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 8475,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 8476,
ves_icall_System_GCHandle_InternalFree_raw,
// token 8477,
ves_icall_System_GCHandle_InternalGet_raw,
// token 8478,
ves_icall_System_GCHandle_InternalSet_raw,
// token 8496,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 8497,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 8498,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 8500,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 8542,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 8608,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 8610,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 8612,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 8620,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 8621,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 8622,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 8623,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 9018,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 9022,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 9023,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 9050,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 9068,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 9075,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 9082,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 9093,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 9097,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 9117,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 9191,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 9193,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 9202,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 9204,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 9205,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 9212,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 9226,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 9246,
ves_icall_reflection_get_token_raw,
// token 9247,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 9255,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 9257,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 9264,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 9265,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 9268,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 9270,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 9275,
ves_icall_reflection_get_token_raw,
// token 9281,
ves_icall_get_method_info_raw,
// token 9282,
ves_icall_get_method_attributes,
// token 9289,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 9291,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 9303,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 9306,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 9307,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 9308,
ves_icall_reflection_get_token_raw,
// token 9319,
ves_icall_InternalInvoke_raw,
// token 9328,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 9334,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 9335,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 9336,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 9338,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 9339,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 9356,
ves_icall_InvokeClassConstructor_raw,
// token 9358,
ves_icall_InternalInvoke_raw,
// token 9372,
ves_icall_reflection_get_token_raw,
// token 9389,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 9416,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 9446,
ves_icall_reflection_get_token_raw,
// token 9447,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 9887,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 9979,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 9980,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 10182,
ves_icall_ModuleBuilder_basic_init_raw,
// token 10183,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 10190,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 10191,
ves_icall_ModuleBuilder_getToken_raw,
// token 10192,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 10197,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 10272,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 10660,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 10661,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 10877,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 10887,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 11640,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 11661,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 11663,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 11665,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
0,
4,
4,
0,
4,
0,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
};
