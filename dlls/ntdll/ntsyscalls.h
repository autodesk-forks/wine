/* Automatically generated by tools/make_specfiles */

#define ALL_SYSCALLS32 \
    SYSCALL_ENTRY( 0x0000, NtAcceptConnectPort, 24 ) \
    SYSCALL_ENTRY( 0x0001, NtAccessCheck, 32 ) \
    SYSCALL_ENTRY( 0x0002, NtAccessCheckAndAuditAlarm, 44 ) \
    SYSCALL_ENTRY( 0x0003, NtAddAtom, 12 ) \
    SYSCALL_ENTRY( 0x0004, NtAdjustGroupsToken, 24 ) \
    SYSCALL_ENTRY( 0x0005, NtAdjustPrivilegesToken, 24 ) \
    SYSCALL_ENTRY( 0x0006, NtAlertResumeThread, 8 ) \
    SYSCALL_ENTRY( 0x0007, NtAlertThread, 4 ) \
    SYSCALL_ENTRY( 0x0008, NtAlertThreadByThreadId, 4 ) \
    SYSCALL_ENTRY( 0x0009, NtAllocateLocallyUniqueId, 4 ) \
    SYSCALL_ENTRY( 0x000a, NtAllocateReserveObject, 12 ) \
    SYSCALL_ENTRY( 0x000b, NtAllocateUuids, 16 ) \
    SYSCALL_ENTRY( 0x000c, NtAllocateVirtualMemory, 24 ) \
    SYSCALL_ENTRY( 0x000d, NtAllocateVirtualMemoryEx, 28 ) \
    SYSCALL_ENTRY( 0x000e, NtAreMappedFilesTheSame, 8 ) \
    SYSCALL_ENTRY( 0x000f, NtAssignProcessToJobObject, 8 ) \
    SYSCALL_ENTRY( 0x0010, NtCallbackReturn, 12 ) \
    SYSCALL_ENTRY( 0x0011, NtCancelIoFile, 8 ) \
    SYSCALL_ENTRY( 0x0012, NtCancelIoFileEx, 12 ) \
    SYSCALL_ENTRY( 0x0013, NtCancelSynchronousIoFile, 12 ) \
    SYSCALL_ENTRY( 0x0014, NtCancelTimer, 8 ) \
    SYSCALL_ENTRY( 0x0015, NtClearEvent, 4 ) \
    SYSCALL_ENTRY( 0x0016, NtClose, 4 ) \
    SYSCALL_ENTRY( 0x0017, NtCommitTransaction, 8 ) \
    SYSCALL_ENTRY( 0x0018, NtCompareObjects, 8 ) \
    SYSCALL_ENTRY( 0x0019, NtCompareTokens, 12 ) \
    SYSCALL_ENTRY( 0x001a, NtCompleteConnectPort, 4 ) \
    SYSCALL_ENTRY( 0x001b, NtConnectPort, 32 ) \
    SYSCALL_ENTRY( 0x001c, NtContinue, 8 ) \
    SYSCALL_ENTRY( 0x001d, NtContinueEx, 8 ) \
    SYSCALL_ENTRY( 0x001e, NtConvertBetweenAuxiliaryCounterAndPerformanceCounter, 16 ) \
    SYSCALL_ENTRY( 0x001f, NtCreateDebugObject, 16 ) \
    SYSCALL_ENTRY( 0x0020, NtCreateDirectoryObject, 12 ) \
    SYSCALL_ENTRY( 0x0021, NtCreateEvent, 20 ) \
    SYSCALL_ENTRY( 0x0022, NtCreateFile, 44 ) \
    SYSCALL_ENTRY( 0x0023, NtCreateIoCompletion, 16 ) \
    SYSCALL_ENTRY( 0x0024, NtCreateJobObject, 12 ) \
    SYSCALL_ENTRY( 0x0025, NtCreateKey, 28 ) \
    SYSCALL_ENTRY( 0x0026, NtCreateKeyTransacted, 32 ) \
    SYSCALL_ENTRY( 0x0027, NtCreateKeyedEvent, 16 ) \
    SYSCALL_ENTRY( 0x0028, NtCreateLowBoxToken, 36 ) \
    SYSCALL_ENTRY( 0x0029, NtCreateMailslotFile, 32 ) \
    SYSCALL_ENTRY( 0x002a, NtCreateMutant, 16 ) \
    SYSCALL_ENTRY( 0x002b, NtCreateNamedPipeFile, 56 ) \
    SYSCALL_ENTRY( 0x002c, NtCreatePagingFile, 16 ) \
    SYSCALL_ENTRY( 0x002d, NtCreatePort, 20 ) \
    SYSCALL_ENTRY( 0x002e, NtCreateSection, 28 ) \
    SYSCALL_ENTRY( 0x002f, NtCreateSectionEx, 36 ) \
    SYSCALL_ENTRY( 0x0030, NtCreateSemaphore, 20 ) \
    SYSCALL_ENTRY( 0x0031, NtCreateSymbolicLinkObject, 16 ) \
    SYSCALL_ENTRY( 0x0032, NtCreateThread, 32 ) \
    SYSCALL_ENTRY( 0x0033, NtCreateThreadEx, 44 ) \
    SYSCALL_ENTRY( 0x0034, NtCreateTimer, 16 ) \
    SYSCALL_ENTRY( 0x0035, NtCreateToken, 52 ) \
    SYSCALL_ENTRY( 0x0036, NtCreateTransaction, 40 ) \
    SYSCALL_ENTRY( 0x0037, NtCreateUserProcess, 44 ) \
    SYSCALL_ENTRY( 0x0038, NtDebugActiveProcess, 8 ) \
    SYSCALL_ENTRY( 0x0039, NtDebugContinue, 12 ) \
    SYSCALL_ENTRY( 0x003a, NtDelayExecution, 8 ) \
    SYSCALL_ENTRY( 0x003b, NtDeleteAtom, 4 ) \
    SYSCALL_ENTRY( 0x003c, NtDeleteFile, 4 ) \
    SYSCALL_ENTRY( 0x003d, NtDeleteKey, 4 ) \
    SYSCALL_ENTRY( 0x003e, NtDeleteValueKey, 8 ) \
    SYSCALL_ENTRY( 0x003f, NtDeviceIoControlFile, 40 ) \
    SYSCALL_ENTRY( 0x0040, NtDisplayString, 4 ) \
    SYSCALL_ENTRY( 0x0041, NtDuplicateObject, 28 ) \
    SYSCALL_ENTRY( 0x0042, NtDuplicateToken, 24 ) \
    SYSCALL_ENTRY( 0x0043, NtEnumerateKey, 24 ) \
    SYSCALL_ENTRY( 0x0044, NtEnumerateValueKey, 24 ) \
    SYSCALL_ENTRY( 0x0045, NtFilterToken, 24 ) \
    SYSCALL_ENTRY( 0x0046, NtFindAtom, 12 ) \
    SYSCALL_ENTRY( 0x0047, NtFlushBuffersFile, 8 ) \
    SYSCALL_ENTRY( 0x0048, NtFlushBuffersFileEx, 20 ) \
    SYSCALL_ENTRY( 0x0049, NtFlushInstructionCache, 12 ) \
    SYSCALL_ENTRY( 0x004a, NtFlushKey, 4 ) \
    SYSCALL_ENTRY( 0x004b, NtFlushProcessWriteBuffers, 0 ) \
    SYSCALL_ENTRY( 0x004c, NtFlushVirtualMemory, 16 ) \
    SYSCALL_ENTRY( 0x004d, NtFreeVirtualMemory, 16 ) \
    SYSCALL_ENTRY( 0x004e, NtFsControlFile, 40 ) \
    SYSCALL_ENTRY( 0x004f, NtGetContextThread, 8 ) \
    SYSCALL_ENTRY( 0x0050, NtGetCurrentProcessorNumber, 0 ) \
    SYSCALL_ENTRY( 0x0051, NtGetNextProcess, 20 ) \
    SYSCALL_ENTRY( 0x0052, NtGetNextThread, 24 ) \
    SYSCALL_ENTRY( 0x0053, NtGetNlsSectionPtr, 20 ) \
    SYSCALL_ENTRY( 0x0054, NtGetWriteWatch, 28 ) \
    SYSCALL_ENTRY( 0x0055, NtImpersonateAnonymousToken, 4 ) \
    SYSCALL_ENTRY( 0x0056, NtInitializeNlsFiles, 12 ) \
    SYSCALL_ENTRY( 0x0057, NtInitiatePowerAction, 16 ) \
    SYSCALL_ENTRY( 0x0058, NtIsProcessInJob, 8 ) \
    SYSCALL_ENTRY( 0x0059, NtListenPort, 8 ) \
    SYSCALL_ENTRY( 0x005a, NtLoadDriver, 4 ) \
    SYSCALL_ENTRY( 0x005b, NtLoadKey, 8 ) \
    SYSCALL_ENTRY( 0x005c, NtLoadKey2, 12 ) \
    SYSCALL_ENTRY( 0x005d, NtLoadKeyEx, 32 ) \
    SYSCALL_ENTRY( 0x005e, NtLockFile, 40 ) \
    SYSCALL_ENTRY( 0x005f, NtLockVirtualMemory, 16 ) \
    SYSCALL_ENTRY( 0x0060, NtMakePermanentObject, 4 ) \
    SYSCALL_ENTRY( 0x0061, NtMakeTemporaryObject, 4 ) \
    SYSCALL_ENTRY( 0x0062, NtMapViewOfSection, 40 ) \
    SYSCALL_ENTRY( 0x0063, NtMapViewOfSectionEx, 36 ) \
    SYSCALL_ENTRY( 0x0064, NtNotifyChangeDirectoryFile, 36 ) \
    SYSCALL_ENTRY( 0x0065, NtNotifyChangeKey, 40 ) \
    SYSCALL_ENTRY( 0x0066, NtNotifyChangeMultipleKeys, 48 ) \
    SYSCALL_ENTRY( 0x0067, NtOpenDirectoryObject, 12 ) \
    SYSCALL_ENTRY( 0x0068, NtOpenEvent, 12 ) \
    SYSCALL_ENTRY( 0x0069, NtOpenFile, 24 ) \
    SYSCALL_ENTRY( 0x006a, NtOpenIoCompletion, 12 ) \
    SYSCALL_ENTRY( 0x006b, NtOpenJobObject, 12 ) \
    SYSCALL_ENTRY( 0x006c, NtOpenKey, 12 ) \
    SYSCALL_ENTRY( 0x006d, NtOpenKeyEx, 16 ) \
    SYSCALL_ENTRY( 0x006e, NtOpenKeyTransacted, 16 ) \
    SYSCALL_ENTRY( 0x006f, NtOpenKeyTransactedEx, 20 ) \
    SYSCALL_ENTRY( 0x0070, NtOpenKeyedEvent, 12 ) \
    SYSCALL_ENTRY( 0x0071, NtOpenMutant, 12 ) \
    SYSCALL_ENTRY( 0x0072, NtOpenProcess, 16 ) \
    SYSCALL_ENTRY( 0x0073, NtOpenProcessToken, 12 ) \
    SYSCALL_ENTRY( 0x0074, NtOpenProcessTokenEx, 16 ) \
    SYSCALL_ENTRY( 0x0075, NtOpenSection, 12 ) \
    SYSCALL_ENTRY( 0x0076, NtOpenSemaphore, 12 ) \
    SYSCALL_ENTRY( 0x0077, NtOpenSymbolicLinkObject, 12 ) \
    SYSCALL_ENTRY( 0x0078, NtOpenThread, 16 ) \
    SYSCALL_ENTRY( 0x0079, NtOpenThreadToken, 16 ) \
    SYSCALL_ENTRY( 0x007a, NtOpenThreadTokenEx, 20 ) \
    SYSCALL_ENTRY( 0x007b, NtOpenTimer, 12 ) \
    SYSCALL_ENTRY( 0x007c, NtPowerInformation, 20 ) \
    SYSCALL_ENTRY( 0x007d, NtPrivilegeCheck, 12 ) \
    SYSCALL_ENTRY( 0x007e, NtProtectVirtualMemory, 20 ) \
    SYSCALL_ENTRY( 0x007f, NtPulseEvent, 8 ) \
    SYSCALL_ENTRY( 0x0080, NtQueryAttributesFile, 8 ) \
    SYSCALL_ENTRY( 0x0081, NtQueryDefaultLocale, 8 ) \
    SYSCALL_ENTRY( 0x0082, NtQueryDefaultUILanguage, 4 ) \
    SYSCALL_ENTRY( 0x0083, NtQueryDirectoryFile, 44 ) \
    SYSCALL_ENTRY( 0x0084, NtQueryDirectoryObject, 28 ) \
    SYSCALL_ENTRY( 0x0085, NtQueryEaFile, 36 ) \
    SYSCALL_ENTRY( 0x0086, NtQueryEvent, 20 ) \
    SYSCALL_ENTRY( 0x0087, NtQueryFullAttributesFile, 8 ) \
    SYSCALL_ENTRY( 0x0088, NtQueryInformationAtom, 20 ) \
    SYSCALL_ENTRY( 0x0089, NtQueryInformationFile, 20 ) \
    SYSCALL_ENTRY( 0x008a, NtQueryInformationJobObject, 20 ) \
    SYSCALL_ENTRY( 0x008b, NtQueryInformationProcess, 20 ) \
    SYSCALL_ENTRY( 0x008c, NtQueryInformationThread, 20 ) \
    SYSCALL_ENTRY( 0x008d, NtQueryInformationToken, 20 ) \
    SYSCALL_ENTRY( 0x008e, NtQueryInstallUILanguage, 4 ) \
    SYSCALL_ENTRY( 0x008f, NtQueryIoCompletion, 20 ) \
    SYSCALL_ENTRY( 0x0090, NtQueryKey, 20 ) \
    SYSCALL_ENTRY( 0x0091, NtQueryLicenseValue, 20 ) \
    SYSCALL_ENTRY( 0x0092, NtQueryMultipleValueKey, 24 ) \
    SYSCALL_ENTRY( 0x0093, NtQueryMutant, 20 ) \
    SYSCALL_ENTRY( 0x0094, NtQueryObject, 20 ) \
    SYSCALL_ENTRY( 0x0095, NtQueryPerformanceCounter, 8 ) \
    SYSCALL_ENTRY( 0x0096, NtQuerySection, 20 ) \
    SYSCALL_ENTRY( 0x0097, NtQuerySecurityObject, 20 ) \
    SYSCALL_ENTRY( 0x0098, NtQuerySemaphore, 20 ) \
    SYSCALL_ENTRY( 0x0099, NtQuerySymbolicLinkObject, 12 ) \
    SYSCALL_ENTRY( 0x009a, NtQuerySystemEnvironmentValue, 16 ) \
    SYSCALL_ENTRY( 0x009b, NtQuerySystemEnvironmentValueEx, 20 ) \
    SYSCALL_ENTRY( 0x009c, NtQuerySystemInformation, 16 ) \
    SYSCALL_ENTRY( 0x009d, NtQuerySystemInformationEx, 24 ) \
    SYSCALL_ENTRY( 0x009e, NtQuerySystemTime, 4 ) \
    SYSCALL_ENTRY( 0x009f, NtQueryTimer, 20 ) \
    SYSCALL_ENTRY( 0x00a0, NtQueryTimerResolution, 12 ) \
    SYSCALL_ENTRY( 0x00a1, NtQueryValueKey, 24 ) \
    SYSCALL_ENTRY( 0x00a2, NtQueryVirtualMemory, 24 ) \
    SYSCALL_ENTRY( 0x00a3, NtQueryVolumeInformationFile, 20 ) \
    SYSCALL_ENTRY( 0x00a4, NtQueueApcThread, 20 ) \
    SYSCALL_ENTRY( 0x00a5, NtQueueApcThreadEx, 24 ) \
    SYSCALL_ENTRY( 0x00a6, NtRaiseException, 12 ) \
    SYSCALL_ENTRY( 0x00a7, NtRaiseHardError, 24 ) \
    SYSCALL_ENTRY( 0x00a8, NtReadFile, 36 ) \
    SYSCALL_ENTRY( 0x00a9, NtReadFileScatter, 36 ) \
    SYSCALL_ENTRY( 0x00aa, NtReadVirtualMemory, 20 ) \
    SYSCALL_ENTRY( 0x00ab, NtRegisterThreadTerminatePort, 4 ) \
    SYSCALL_ENTRY( 0x00ac, NtReleaseKeyedEvent, 16 ) \
    SYSCALL_ENTRY( 0x00ad, NtReleaseMutant, 8 ) \
    SYSCALL_ENTRY( 0x00ae, NtReleaseSemaphore, 12 ) \
    SYSCALL_ENTRY( 0x00af, NtRemoveIoCompletion, 20 ) \
    SYSCALL_ENTRY( 0x00b0, NtRemoveIoCompletionEx, 24 ) \
    SYSCALL_ENTRY( 0x00b1, NtRemoveProcessDebug, 8 ) \
    SYSCALL_ENTRY( 0x00b2, NtRenameKey, 8 ) \
    SYSCALL_ENTRY( 0x00b3, NtReplaceKey, 12 ) \
    SYSCALL_ENTRY( 0x00b4, NtReplyWaitReceivePort, 16 ) \
    SYSCALL_ENTRY( 0x00b5, NtRequestWaitReplyPort, 12 ) \
    SYSCALL_ENTRY( 0x00b6, NtResetEvent, 8 ) \
    SYSCALL_ENTRY( 0x00b7, NtResetWriteWatch, 12 ) \
    SYSCALL_ENTRY( 0x00b8, NtRestoreKey, 12 ) \
    SYSCALL_ENTRY( 0x00b9, NtResumeProcess, 4 ) \
    SYSCALL_ENTRY( 0x00ba, NtResumeThread, 8 ) \
    SYSCALL_ENTRY( 0x00bb, NtRollbackTransaction, 8 ) \
    SYSCALL_ENTRY( 0x00bc, NtSaveKey, 8 ) \
    SYSCALL_ENTRY( 0x00bd, NtSecureConnectPort, 36 ) \
    SYSCALL_ENTRY( 0x00be, NtSetContextThread, 8 ) \
    SYSCALL_ENTRY( 0x00bf, NtSetDebugFilterState, 12 ) \
    SYSCALL_ENTRY( 0x00c0, NtSetDefaultLocale, 8 ) \
    SYSCALL_ENTRY( 0x00c1, NtSetDefaultUILanguage, 4 ) \
    SYSCALL_ENTRY( 0x00c2, NtSetEaFile, 16 ) \
    SYSCALL_ENTRY( 0x00c3, NtSetEvent, 8 ) \
    SYSCALL_ENTRY( 0x00c4, NtSetInformationDebugObject, 20 ) \
    SYSCALL_ENTRY( 0x00c5, NtSetInformationFile, 20 ) \
    SYSCALL_ENTRY( 0x00c6, NtSetInformationJobObject, 16 ) \
    SYSCALL_ENTRY( 0x00c7, NtSetInformationKey, 16 ) \
    SYSCALL_ENTRY( 0x00c8, NtSetInformationObject, 16 ) \
    SYSCALL_ENTRY( 0x00c9, NtSetInformationProcess, 16 ) \
    SYSCALL_ENTRY( 0x00ca, NtSetInformationThread, 16 ) \
    SYSCALL_ENTRY( 0x00cb, NtSetInformationToken, 16 ) \
    SYSCALL_ENTRY( 0x00cc, NtSetInformationVirtualMemory, 24 ) \
    SYSCALL_ENTRY( 0x00cd, NtSetIntervalProfile, 8 ) \
    SYSCALL_ENTRY( 0x00ce, NtSetIoCompletion, 20 ) \
    SYSCALL_ENTRY( 0x00cf, NtSetIoCompletionEx, 24 ) \
    SYSCALL_ENTRY( 0x00d0, NtSetLdtEntries, 24 ) \
    SYSCALL_ENTRY( 0x00d1, NtSetSecurityObject, 12 ) \
    SYSCALL_ENTRY( 0x00d2, NtSetSystemInformation, 12 ) \
    SYSCALL_ENTRY( 0x00d3, NtSetSystemTime, 8 ) \
    SYSCALL_ENTRY( 0x00d4, NtSetThreadExecutionState, 8 ) \
    SYSCALL_ENTRY( 0x00d5, NtSetTimer, 28 ) \
    SYSCALL_ENTRY( 0x00d6, NtSetTimerResolution, 12 ) \
    SYSCALL_ENTRY( 0x00d7, NtSetValueKey, 24 ) \
    SYSCALL_ENTRY( 0x00d8, NtSetVolumeInformationFile, 20 ) \
    SYSCALL_ENTRY( 0x00d9, NtShutdownSystem, 4 ) \
    SYSCALL_ENTRY( 0x00da, NtSignalAndWaitForSingleObject, 16 ) \
    SYSCALL_ENTRY( 0x00db, NtSuspendProcess, 4 ) \
    SYSCALL_ENTRY( 0x00dc, NtSuspendThread, 8 ) \
    SYSCALL_ENTRY( 0x00dd, NtSystemDebugControl, 24 ) \
    SYSCALL_ENTRY( 0x00de, NtTerminateJobObject, 8 ) \
    SYSCALL_ENTRY( 0x00df, NtTerminateProcess, 8 ) \
    SYSCALL_ENTRY( 0x00e0, NtTerminateThread, 8 ) \
    SYSCALL_ENTRY( 0x00e1, NtTestAlert, 0 ) \
    SYSCALL_ENTRY( 0x00e2, NtTraceControl, 24 ) \
    SYSCALL_ENTRY( 0x00e3, NtUnloadDriver, 4 ) \
    SYSCALL_ENTRY( 0x00e4, NtUnloadKey, 4 ) \
    SYSCALL_ENTRY( 0x00e5, NtUnlockFile, 20 ) \
    SYSCALL_ENTRY( 0x00e6, NtUnlockVirtualMemory, 16 ) \
    SYSCALL_ENTRY( 0x00e7, NtUnmapViewOfSection, 8 ) \
    SYSCALL_ENTRY( 0x00e8, NtUnmapViewOfSectionEx, 12 ) \
    SYSCALL_ENTRY( 0x00e9, NtWaitForAlertByThreadId, 8 ) \
    SYSCALL_ENTRY( 0x00ea, NtWaitForDebugEvent, 16 ) \
    SYSCALL_ENTRY( 0x00eb, NtWaitForKeyedEvent, 16 ) \
    SYSCALL_ENTRY( 0x00ec, NtWaitForMultipleObjects, 20 ) \
    SYSCALL_ENTRY( 0x00ed, NtWaitForSingleObject, 12 ) \
    SYSCALL_ENTRY( 0x00ee, NtWow64AllocateVirtualMemory64, 28 ) \
    SYSCALL_ENTRY( 0x00ef, NtWow64GetNativeSystemInformation, 16 ) \
    SYSCALL_ENTRY( 0x00f0, NtWow64IsProcessorFeaturePresent, 4 ) \
    SYSCALL_ENTRY( 0x00f1, NtWow64QueryInformationProcess64, 20 ) \
    SYSCALL_ENTRY( 0x00f2, NtWow64ReadVirtualMemory64, 28 ) \
    SYSCALL_ENTRY( 0x00f3, NtWow64WriteVirtualMemory64, 28 ) \
    SYSCALL_ENTRY( 0x00f4, NtWriteFile, 36 ) \
    SYSCALL_ENTRY( 0x00f5, NtWriteFileGather, 36 ) \
    SYSCALL_ENTRY( 0x00f6, NtWriteVirtualMemory, 20 ) \
    SYSCALL_ENTRY( 0x00f7, NtYieldExecution, 0 ) \
    SYSCALL_ENTRY( 0x00f8, wine_nt_to_unix_file_name, 16 ) \
    SYSCALL_ENTRY( 0x00f9, wine_unix_to_nt_file_name, 12 )

#define ALL_SYSCALLS64 \
    SYSCALL_ENTRY( 0x0000, NtAcceptConnectPort, 48 ) \
    SYSCALL_ENTRY( 0x0001, NtAccessCheck, 64 ) \
    SYSCALL_ENTRY( 0x0002, NtAccessCheckAndAuditAlarm, 88 ) \
    SYSCALL_ENTRY( 0x0003, NtAddAtom, 24 ) \
    SYSCALL_ENTRY( 0x0004, NtAdjustGroupsToken, 48 ) \
    SYSCALL_ENTRY( 0x0005, NtAdjustPrivilegesToken, 48 ) \
    SYSCALL_ENTRY( 0x0006, NtAlertResumeThread, 16 ) \
    SYSCALL_ENTRY( 0x0007, NtAlertThread, 8 ) \
    SYSCALL_ENTRY( 0x0008, NtAlertThreadByThreadId, 8 ) \
    SYSCALL_ENTRY( 0x0009, NtAllocateLocallyUniqueId, 8 ) \
    SYSCALL_ENTRY( 0x000a, NtAllocateReserveObject, 24 ) \
    SYSCALL_ENTRY( 0x000b, NtAllocateUuids, 32 ) \
    SYSCALL_ENTRY( 0x000c, NtAllocateVirtualMemory, 48 ) \
    SYSCALL_ENTRY( 0x000d, NtAllocateVirtualMemoryEx, 56 ) \
    SYSCALL_ENTRY( 0x000e, NtAreMappedFilesTheSame, 16 ) \
    SYSCALL_ENTRY( 0x000f, NtAssignProcessToJobObject, 16 ) \
    SYSCALL_ENTRY( 0x0010, NtCallbackReturn, 24 ) \
    SYSCALL_ENTRY( 0x0011, NtCancelIoFile, 16 ) \
    SYSCALL_ENTRY( 0x0012, NtCancelIoFileEx, 24 ) \
    SYSCALL_ENTRY( 0x0013, NtCancelSynchronousIoFile, 24 ) \
    SYSCALL_ENTRY( 0x0014, NtCancelTimer, 16 ) \
    SYSCALL_ENTRY( 0x0015, NtClearEvent, 8 ) \
    SYSCALL_ENTRY( 0x0016, NtClose, 8 ) \
    SYSCALL_ENTRY( 0x0017, NtCommitTransaction, 16 ) \
    SYSCALL_ENTRY( 0x0018, NtCompareObjects, 16 ) \
    SYSCALL_ENTRY( 0x0019, NtCompareTokens, 24 ) \
    SYSCALL_ENTRY( 0x001a, NtCompleteConnectPort, 8 ) \
    SYSCALL_ENTRY( 0x001b, NtConnectPort, 64 ) \
    SYSCALL_ENTRY( 0x001c, NtContinue, 16 ) \
    SYSCALL_ENTRY( 0x001d, NtContinueEx, 16 ) \
    SYSCALL_ENTRY( 0x001e, NtConvertBetweenAuxiliaryCounterAndPerformanceCounter, 32 ) \
    SYSCALL_ENTRY( 0x001f, NtCreateDebugObject, 32 ) \
    SYSCALL_ENTRY( 0x0020, NtCreateDirectoryObject, 24 ) \
    SYSCALL_ENTRY( 0x0021, NtCreateEvent, 40 ) \
    SYSCALL_ENTRY( 0x0022, NtCreateFile, 88 ) \
    SYSCALL_ENTRY( 0x0023, NtCreateIoCompletion, 32 ) \
    SYSCALL_ENTRY( 0x0024, NtCreateJobObject, 24 ) \
    SYSCALL_ENTRY( 0x0025, NtCreateKey, 56 ) \
    SYSCALL_ENTRY( 0x0026, NtCreateKeyTransacted, 64 ) \
    SYSCALL_ENTRY( 0x0027, NtCreateKeyedEvent, 32 ) \
    SYSCALL_ENTRY( 0x0028, NtCreateLowBoxToken, 72 ) \
    SYSCALL_ENTRY( 0x0029, NtCreateMailslotFile, 64 ) \
    SYSCALL_ENTRY( 0x002a, NtCreateMutant, 32 ) \
    SYSCALL_ENTRY( 0x002b, NtCreateNamedPipeFile, 112 ) \
    SYSCALL_ENTRY( 0x002c, NtCreatePagingFile, 32 ) \
    SYSCALL_ENTRY( 0x002d, NtCreatePort, 40 ) \
    SYSCALL_ENTRY( 0x002e, NtCreateSection, 56 ) \
    SYSCALL_ENTRY( 0x002f, NtCreateSectionEx, 72 ) \
    SYSCALL_ENTRY( 0x0030, NtCreateSemaphore, 40 ) \
    SYSCALL_ENTRY( 0x0031, NtCreateSymbolicLinkObject, 32 ) \
    SYSCALL_ENTRY( 0x0032, NtCreateThread, 64 ) \
    SYSCALL_ENTRY( 0x0033, NtCreateThreadEx, 88 ) \
    SYSCALL_ENTRY( 0x0034, NtCreateTimer, 32 ) \
    SYSCALL_ENTRY( 0x0035, NtCreateToken, 104 ) \
    SYSCALL_ENTRY( 0x0036, NtCreateTransaction, 80 ) \
    SYSCALL_ENTRY( 0x0037, NtCreateUserProcess, 88 ) \
    SYSCALL_ENTRY( 0x0038, NtDebugActiveProcess, 16 ) \
    SYSCALL_ENTRY( 0x0039, NtDebugContinue, 24 ) \
    SYSCALL_ENTRY( 0x003a, NtDelayExecution, 16 ) \
    SYSCALL_ENTRY( 0x003b, NtDeleteAtom, 8 ) \
    SYSCALL_ENTRY( 0x003c, NtDeleteFile, 8 ) \
    SYSCALL_ENTRY( 0x003d, NtDeleteKey, 8 ) \
    SYSCALL_ENTRY( 0x003e, NtDeleteValueKey, 16 ) \
    SYSCALL_ENTRY( 0x003f, NtDeviceIoControlFile, 80 ) \
    SYSCALL_ENTRY( 0x0040, NtDisplayString, 8 ) \
    SYSCALL_ENTRY( 0x0041, NtDuplicateObject, 56 ) \
    SYSCALL_ENTRY( 0x0042, NtDuplicateToken, 48 ) \
    SYSCALL_ENTRY( 0x0043, NtEnumerateKey, 48 ) \
    SYSCALL_ENTRY( 0x0044, NtEnumerateValueKey, 48 ) \
    SYSCALL_ENTRY( 0x0045, NtFilterToken, 48 ) \
    SYSCALL_ENTRY( 0x0046, NtFindAtom, 24 ) \
    SYSCALL_ENTRY( 0x0047, NtFlushBuffersFile, 16 ) \
    SYSCALL_ENTRY( 0x0048, NtFlushBuffersFileEx, 40 ) \
    SYSCALL_ENTRY( 0x0049, NtFlushInstructionCache, 24 ) \
    SYSCALL_ENTRY( 0x004a, NtFlushKey, 8 ) \
    SYSCALL_ENTRY( 0x004b, NtFlushProcessWriteBuffers, 0 ) \
    SYSCALL_ENTRY( 0x004c, NtFlushVirtualMemory, 32 ) \
    SYSCALL_ENTRY( 0x004d, NtFreeVirtualMemory, 32 ) \
    SYSCALL_ENTRY( 0x004e, NtFsControlFile, 80 ) \
    SYSCALL_ENTRY( 0x004f, NtGetContextThread, 16 ) \
    SYSCALL_ENTRY( 0x0050, NtGetCurrentProcessorNumber, 0 ) \
    SYSCALL_ENTRY( 0x0051, NtGetNextProcess, 40 ) \
    SYSCALL_ENTRY( 0x0052, NtGetNextThread, 48 ) \
    SYSCALL_ENTRY( 0x0053, NtGetNlsSectionPtr, 40 ) \
    SYSCALL_ENTRY( 0x0054, NtGetWriteWatch, 56 ) \
    SYSCALL_ENTRY( 0x0055, NtImpersonateAnonymousToken, 8 ) \
    SYSCALL_ENTRY( 0x0056, NtInitializeNlsFiles, 24 ) \
    SYSCALL_ENTRY( 0x0057, NtInitiatePowerAction, 32 ) \
    SYSCALL_ENTRY( 0x0058, NtIsProcessInJob, 16 ) \
    SYSCALL_ENTRY( 0x0059, NtListenPort, 16 ) \
    SYSCALL_ENTRY( 0x005a, NtLoadDriver, 8 ) \
    SYSCALL_ENTRY( 0x005b, NtLoadKey, 16 ) \
    SYSCALL_ENTRY( 0x005c, NtLoadKey2, 24 ) \
    SYSCALL_ENTRY( 0x005d, NtLoadKeyEx, 64 ) \
    SYSCALL_ENTRY( 0x005e, NtLockFile, 80 ) \
    SYSCALL_ENTRY( 0x005f, NtLockVirtualMemory, 32 ) \
    SYSCALL_ENTRY( 0x0060, NtMakePermanentObject, 8 ) \
    SYSCALL_ENTRY( 0x0061, NtMakeTemporaryObject, 8 ) \
    SYSCALL_ENTRY( 0x0062, NtMapViewOfSection, 80 ) \
    SYSCALL_ENTRY( 0x0063, NtMapViewOfSectionEx, 72 ) \
    SYSCALL_ENTRY( 0x0064, NtNotifyChangeDirectoryFile, 72 ) \
    SYSCALL_ENTRY( 0x0065, NtNotifyChangeKey, 80 ) \
    SYSCALL_ENTRY( 0x0066, NtNotifyChangeMultipleKeys, 96 ) \
    SYSCALL_ENTRY( 0x0067, NtOpenDirectoryObject, 24 ) \
    SYSCALL_ENTRY( 0x0068, NtOpenEvent, 24 ) \
    SYSCALL_ENTRY( 0x0069, NtOpenFile, 48 ) \
    SYSCALL_ENTRY( 0x006a, NtOpenIoCompletion, 24 ) \
    SYSCALL_ENTRY( 0x006b, NtOpenJobObject, 24 ) \
    SYSCALL_ENTRY( 0x006c, NtOpenKey, 24 ) \
    SYSCALL_ENTRY( 0x006d, NtOpenKeyEx, 32 ) \
    SYSCALL_ENTRY( 0x006e, NtOpenKeyTransacted, 32 ) \
    SYSCALL_ENTRY( 0x006f, NtOpenKeyTransactedEx, 40 ) \
    SYSCALL_ENTRY( 0x0070, NtOpenKeyedEvent, 24 ) \
    SYSCALL_ENTRY( 0x0071, NtOpenMutant, 24 ) \
    SYSCALL_ENTRY( 0x0072, NtOpenProcess, 32 ) \
    SYSCALL_ENTRY( 0x0073, NtOpenProcessToken, 24 ) \
    SYSCALL_ENTRY( 0x0074, NtOpenProcessTokenEx, 32 ) \
    SYSCALL_ENTRY( 0x0075, NtOpenSection, 24 ) \
    SYSCALL_ENTRY( 0x0076, NtOpenSemaphore, 24 ) \
    SYSCALL_ENTRY( 0x0077, NtOpenSymbolicLinkObject, 24 ) \
    SYSCALL_ENTRY( 0x0078, NtOpenThread, 32 ) \
    SYSCALL_ENTRY( 0x0079, NtOpenThreadToken, 32 ) \
    SYSCALL_ENTRY( 0x007a, NtOpenThreadTokenEx, 40 ) \
    SYSCALL_ENTRY( 0x007b, NtOpenTimer, 24 ) \
    SYSCALL_ENTRY( 0x007c, NtPowerInformation, 40 ) \
    SYSCALL_ENTRY( 0x007d, NtPrivilegeCheck, 24 ) \
    SYSCALL_ENTRY( 0x007e, NtProtectVirtualMemory, 40 ) \
    SYSCALL_ENTRY( 0x007f, NtPulseEvent, 16 ) \
    SYSCALL_ENTRY( 0x0080, NtQueryAttributesFile, 16 ) \
    SYSCALL_ENTRY( 0x0081, NtQueryDefaultLocale, 16 ) \
    SYSCALL_ENTRY( 0x0082, NtQueryDefaultUILanguage, 8 ) \
    SYSCALL_ENTRY( 0x0083, NtQueryDirectoryFile, 88 ) \
    SYSCALL_ENTRY( 0x0084, NtQueryDirectoryObject, 56 ) \
    SYSCALL_ENTRY( 0x0085, NtQueryEaFile, 72 ) \
    SYSCALL_ENTRY( 0x0086, NtQueryEvent, 40 ) \
    SYSCALL_ENTRY( 0x0087, NtQueryFullAttributesFile, 16 ) \
    SYSCALL_ENTRY( 0x0088, NtQueryInformationAtom, 40 ) \
    SYSCALL_ENTRY( 0x0089, NtQueryInformationFile, 40 ) \
    SYSCALL_ENTRY( 0x008a, NtQueryInformationJobObject, 40 ) \
    SYSCALL_ENTRY( 0x008b, NtQueryInformationProcess, 40 ) \
    SYSCALL_ENTRY( 0x008c, NtQueryInformationThread, 40 ) \
    SYSCALL_ENTRY( 0x008d, NtQueryInformationToken, 40 ) \
    SYSCALL_ENTRY( 0x008e, NtQueryInstallUILanguage, 8 ) \
    SYSCALL_ENTRY( 0x008f, NtQueryIoCompletion, 40 ) \
    SYSCALL_ENTRY( 0x0090, NtQueryKey, 40 ) \
    SYSCALL_ENTRY( 0x0091, NtQueryLicenseValue, 40 ) \
    SYSCALL_ENTRY( 0x0092, NtQueryMultipleValueKey, 48 ) \
    SYSCALL_ENTRY( 0x0093, NtQueryMutant, 40 ) \
    SYSCALL_ENTRY( 0x0094, NtQueryObject, 40 ) \
    SYSCALL_ENTRY( 0x0095, NtQueryPerformanceCounter, 16 ) \
    SYSCALL_ENTRY( 0x0096, NtQuerySection, 40 ) \
    SYSCALL_ENTRY( 0x0097, NtQuerySecurityObject, 40 ) \
    SYSCALL_ENTRY( 0x0098, NtQuerySemaphore, 40 ) \
    SYSCALL_ENTRY( 0x0099, NtQuerySymbolicLinkObject, 24 ) \
    SYSCALL_ENTRY( 0x009a, NtQuerySystemEnvironmentValue, 32 ) \
    SYSCALL_ENTRY( 0x009b, NtQuerySystemEnvironmentValueEx, 40 ) \
    SYSCALL_ENTRY( 0x009c, NtQuerySystemInformation, 32 ) \
    SYSCALL_ENTRY( 0x009d, NtQuerySystemInformationEx, 48 ) \
    SYSCALL_ENTRY( 0x009e, NtQuerySystemTime, 8 ) \
    SYSCALL_ENTRY( 0x009f, NtQueryTimer, 40 ) \
    SYSCALL_ENTRY( 0x00a0, NtQueryTimerResolution, 24 ) \
    SYSCALL_ENTRY( 0x00a1, NtQueryValueKey, 48 ) \
    SYSCALL_ENTRY( 0x00a2, NtQueryVirtualMemory, 48 ) \
    SYSCALL_ENTRY( 0x00a3, NtQueryVolumeInformationFile, 40 ) \
    SYSCALL_ENTRY( 0x00a4, NtQueueApcThread, 40 ) \
    SYSCALL_ENTRY( 0x00a5, NtQueueApcThreadEx, 48 ) \
    SYSCALL_ENTRY( 0x00a6, NtRaiseException, 24 ) \
    SYSCALL_ENTRY( 0x00a7, NtRaiseHardError, 48 ) \
    SYSCALL_ENTRY( 0x00a8, NtReadFile, 72 ) \
    SYSCALL_ENTRY( 0x00a9, NtReadFileScatter, 72 ) \
    SYSCALL_ENTRY( 0x00aa, NtReadVirtualMemory, 40 ) \
    SYSCALL_ENTRY( 0x00ab, NtRegisterThreadTerminatePort, 8 ) \
    SYSCALL_ENTRY( 0x00ac, NtReleaseKeyedEvent, 32 ) \
    SYSCALL_ENTRY( 0x00ad, NtReleaseMutant, 16 ) \
    SYSCALL_ENTRY( 0x00ae, NtReleaseSemaphore, 24 ) \
    SYSCALL_ENTRY( 0x00af, NtRemoveIoCompletion, 40 ) \
    SYSCALL_ENTRY( 0x00b0, NtRemoveIoCompletionEx, 48 ) \
    SYSCALL_ENTRY( 0x00b1, NtRemoveProcessDebug, 16 ) \
    SYSCALL_ENTRY( 0x00b2, NtRenameKey, 16 ) \
    SYSCALL_ENTRY( 0x00b3, NtReplaceKey, 24 ) \
    SYSCALL_ENTRY( 0x00b4, NtReplyWaitReceivePort, 32 ) \
    SYSCALL_ENTRY( 0x00b5, NtRequestWaitReplyPort, 24 ) \
    SYSCALL_ENTRY( 0x00b6, NtResetEvent, 16 ) \
    SYSCALL_ENTRY( 0x00b7, NtResetWriteWatch, 24 ) \
    SYSCALL_ENTRY( 0x00b8, NtRestoreKey, 24 ) \
    SYSCALL_ENTRY( 0x00b9, NtResumeProcess, 8 ) \
    SYSCALL_ENTRY( 0x00ba, NtResumeThread, 16 ) \
    SYSCALL_ENTRY( 0x00bb, NtRollbackTransaction, 16 ) \
    SYSCALL_ENTRY( 0x00bc, NtSaveKey, 16 ) \
    SYSCALL_ENTRY( 0x00bd, NtSecureConnectPort, 72 ) \
    SYSCALL_ENTRY( 0x00be, NtSetContextThread, 16 ) \
    SYSCALL_ENTRY( 0x00bf, NtSetDebugFilterState, 24 ) \
    SYSCALL_ENTRY( 0x00c0, NtSetDefaultLocale, 16 ) \
    SYSCALL_ENTRY( 0x00c1, NtSetDefaultUILanguage, 8 ) \
    SYSCALL_ENTRY( 0x00c2, NtSetEaFile, 32 ) \
    SYSCALL_ENTRY( 0x00c3, NtSetEvent, 16 ) \
    SYSCALL_ENTRY( 0x00c4, NtSetInformationDebugObject, 40 ) \
    SYSCALL_ENTRY( 0x00c5, NtSetInformationFile, 40 ) \
    SYSCALL_ENTRY( 0x00c6, NtSetInformationJobObject, 32 ) \
    SYSCALL_ENTRY( 0x00c7, NtSetInformationKey, 32 ) \
    SYSCALL_ENTRY( 0x00c8, NtSetInformationObject, 32 ) \
    SYSCALL_ENTRY( 0x00c9, NtSetInformationProcess, 32 ) \
    SYSCALL_ENTRY( 0x00ca, NtSetInformationThread, 32 ) \
    SYSCALL_ENTRY( 0x00cb, NtSetInformationToken, 32 ) \
    SYSCALL_ENTRY( 0x00cc, NtSetInformationVirtualMemory, 48 ) \
    SYSCALL_ENTRY( 0x00cd, NtSetIntervalProfile, 16 ) \
    SYSCALL_ENTRY( 0x00ce, NtSetIoCompletion, 40 ) \
    SYSCALL_ENTRY( 0x00cf, NtSetIoCompletionEx, 48 ) \
    SYSCALL_ENTRY( 0x00d0, NtSetLdtEntries, 32 ) \
    SYSCALL_ENTRY( 0x00d1, NtSetSecurityObject, 24 ) \
    SYSCALL_ENTRY( 0x00d2, NtSetSystemInformation, 24 ) \
    SYSCALL_ENTRY( 0x00d3, NtSetSystemTime, 16 ) \
    SYSCALL_ENTRY( 0x00d4, NtSetThreadExecutionState, 16 ) \
    SYSCALL_ENTRY( 0x00d5, NtSetTimer, 56 ) \
    SYSCALL_ENTRY( 0x00d6, NtSetTimerResolution, 24 ) \
    SYSCALL_ENTRY( 0x00d7, NtSetValueKey, 48 ) \
    SYSCALL_ENTRY( 0x00d8, NtSetVolumeInformationFile, 40 ) \
    SYSCALL_ENTRY( 0x00d9, NtShutdownSystem, 8 ) \
    SYSCALL_ENTRY( 0x00da, NtSignalAndWaitForSingleObject, 32 ) \
    SYSCALL_ENTRY( 0x00db, NtSuspendProcess, 8 ) \
    SYSCALL_ENTRY( 0x00dc, NtSuspendThread, 16 ) \
    SYSCALL_ENTRY( 0x00dd, NtSystemDebugControl, 48 ) \
    SYSCALL_ENTRY( 0x00de, NtTerminateJobObject, 16 ) \
    SYSCALL_ENTRY( 0x00df, NtTerminateProcess, 16 ) \
    SYSCALL_ENTRY( 0x00e0, NtTerminateThread, 16 ) \
    SYSCALL_ENTRY( 0x00e1, NtTestAlert, 0 ) \
    SYSCALL_ENTRY( 0x00e2, NtTraceControl, 48 ) \
    SYSCALL_ENTRY( 0x00e3, NtUnloadDriver, 8 ) \
    SYSCALL_ENTRY( 0x00e4, NtUnloadKey, 8 ) \
    SYSCALL_ENTRY( 0x00e5, NtUnlockFile, 40 ) \
    SYSCALL_ENTRY( 0x00e6, NtUnlockVirtualMemory, 32 ) \
    SYSCALL_ENTRY( 0x00e7, NtUnmapViewOfSection, 16 ) \
    SYSCALL_ENTRY( 0x00e8, NtUnmapViewOfSectionEx, 24 ) \
    SYSCALL_ENTRY( 0x00e9, NtWaitForAlertByThreadId, 16 ) \
    SYSCALL_ENTRY( 0x00ea, NtWaitForDebugEvent, 32 ) \
    SYSCALL_ENTRY( 0x00eb, NtWaitForKeyedEvent, 32 ) \
    SYSCALL_ENTRY( 0x00ec, NtWaitForMultipleObjects, 40 ) \
    SYSCALL_ENTRY( 0x00ed, NtWaitForSingleObject, 24 ) \
    SYSCALL_ENTRY( 0x00ee, NtWriteFile, 72 ) \
    SYSCALL_ENTRY( 0x00ef, NtWriteFileGather, 72 ) \
    SYSCALL_ENTRY( 0x00f0, NtWriteVirtualMemory, 40 ) \
    SYSCALL_ENTRY( 0x00f1, NtYieldExecution, 0 ) \
    SYSCALL_ENTRY( 0x00f2, wine_nt_to_unix_file_name, 32 ) \
    SYSCALL_ENTRY( 0x00f3, wine_unix_to_nt_file_name, 24 )
