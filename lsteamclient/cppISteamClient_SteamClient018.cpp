/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamClient_SteamClient018_CreateSteamPipe( void *args )
{
    struct ISteamClient_SteamClient018_CreateSteamPipe_params *params = (struct ISteamClient_SteamClient018_CreateSteamPipe_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->CreateSteamPipe(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_CreateSteamPipe( void *args )
{
    struct wow64_ISteamClient_SteamClient018_CreateSteamPipe_params *params = (struct wow64_ISteamClient_SteamClient018_CreateSteamPipe_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->CreateSteamPipe(  );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_BReleaseSteamPipe( void *args )
{
    struct ISteamClient_SteamClient018_BReleaseSteamPipe_params *params = (struct ISteamClient_SteamClient018_BReleaseSteamPipe_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_BReleaseSteamPipe( void *args )
{
    struct wow64_ISteamClient_SteamClient018_BReleaseSteamPipe_params *params = (struct wow64_ISteamClient_SteamClient018_BReleaseSteamPipe_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->BReleaseSteamPipe( params->hSteamPipe );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_ConnectToGlobalUser( void *args )
{
    struct ISteamClient_SteamClient018_ConnectToGlobalUser_params *params = (struct ISteamClient_SteamClient018_ConnectToGlobalUser_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_ConnectToGlobalUser( void *args )
{
    struct wow64_ISteamClient_SteamClient018_ConnectToGlobalUser_params *params = (struct wow64_ISteamClient_SteamClient018_ConnectToGlobalUser_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->ConnectToGlobalUser( params->hSteamPipe );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_CreateLocalUser( void *args )
{
    struct ISteamClient_SteamClient018_CreateLocalUser_params *params = (struct ISteamClient_SteamClient018_CreateLocalUser_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe, params->eAccountType );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_CreateLocalUser( void *args )
{
    struct wow64_ISteamClient_SteamClient018_CreateLocalUser_params *params = (struct wow64_ISteamClient_SteamClient018_CreateLocalUser_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->CreateLocalUser( params->phSteamPipe, params->eAccountType );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_ReleaseUser( void *args )
{
    struct ISteamClient_SteamClient018_ReleaseUser_params *params = (struct ISteamClient_SteamClient018_ReleaseUser_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_ReleaseUser( void *args )
{
    struct wow64_ISteamClient_SteamClient018_ReleaseUser_params *params = (struct wow64_ISteamClient_SteamClient018_ReleaseUser_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    iface->ReleaseUser( params->hSteamPipe, params->hUser );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_GetISteamUser( void *args )
{
    struct ISteamClient_SteamClient018_GetISteamUser_params *params = (struct ISteamClient_SteamClient018_GetISteamUser_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_GetISteamUser( void *args )
{
    struct wow64_ISteamClient_SteamClient018_GetISteamUser_params *params = (struct wow64_ISteamClient_SteamClient018_GetISteamUser_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamUser( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_GetISteamGameServer( void *args )
{
    struct ISteamClient_SteamClient018_GetISteamGameServer_params *params = (struct ISteamClient_SteamClient018_GetISteamGameServer_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_GetISteamGameServer( void *args )
{
    struct wow64_ISteamClient_SteamClient018_GetISteamGameServer_params *params = (struct wow64_ISteamClient_SteamClient018_GetISteamGameServer_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamGameServer( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_SetLocalIPBinding( void *args )
{
    struct ISteamClient_SteamClient018_SetLocalIPBinding_params *params = (struct ISteamClient_SteamClient018_SetLocalIPBinding_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_SetLocalIPBinding( void *args )
{
    struct wow64_ISteamClient_SteamClient018_SetLocalIPBinding_params *params = (struct wow64_ISteamClient_SteamClient018_SetLocalIPBinding_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    iface->SetLocalIPBinding( params->unIP, params->usPort );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_GetISteamFriends( void *args )
{
    struct ISteamClient_SteamClient018_GetISteamFriends_params *params = (struct ISteamClient_SteamClient018_GetISteamFriends_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_GetISteamFriends( void *args )
{
    struct wow64_ISteamClient_SteamClient018_GetISteamFriends_params *params = (struct wow64_ISteamClient_SteamClient018_GetISteamFriends_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamFriends( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_GetISteamUtils( void *args )
{
    struct ISteamClient_SteamClient018_GetISteamUtils_params *params = (struct ISteamClient_SteamClient018_GetISteamUtils_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_GetISteamUtils( void *args )
{
    struct wow64_ISteamClient_SteamClient018_GetISteamUtils_params *params = (struct wow64_ISteamClient_SteamClient018_GetISteamUtils_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamUtils( params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_GetISteamMatchmaking( void *args )
{
    struct ISteamClient_SteamClient018_GetISteamMatchmaking_params *params = (struct ISteamClient_SteamClient018_GetISteamMatchmaking_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_GetISteamMatchmaking( void *args )
{
    struct wow64_ISteamClient_SteamClient018_GetISteamMatchmaking_params *params = (struct wow64_ISteamClient_SteamClient018_GetISteamMatchmaking_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamMatchmaking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_GetISteamMatchmakingServers( void *args )
{
    struct ISteamClient_SteamClient018_GetISteamMatchmakingServers_params *params = (struct ISteamClient_SteamClient018_GetISteamMatchmakingServers_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_GetISteamMatchmakingServers( void *args )
{
    struct wow64_ISteamClient_SteamClient018_GetISteamMatchmakingServers_params *params = (struct wow64_ISteamClient_SteamClient018_GetISteamMatchmakingServers_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamMatchmakingServers( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_GetISteamGenericInterface( void *args )
{
    struct ISteamClient_SteamClient018_GetISteamGenericInterface_params *params = (struct ISteamClient_SteamClient018_GetISteamGenericInterface_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamGenericInterface( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_GetISteamGenericInterface( void *args )
{
    struct wow64_ISteamClient_SteamClient018_GetISteamGenericInterface_params *params = (struct wow64_ISteamClient_SteamClient018_GetISteamGenericInterface_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamGenericInterface( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_GetISteamUserStats( void *args )
{
    struct ISteamClient_SteamClient018_GetISteamUserStats_params *params = (struct ISteamClient_SteamClient018_GetISteamUserStats_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamUserStats( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_GetISteamUserStats( void *args )
{
    struct wow64_ISteamClient_SteamClient018_GetISteamUserStats_params *params = (struct wow64_ISteamClient_SteamClient018_GetISteamUserStats_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamUserStats( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_GetISteamGameServerStats( void *args )
{
    struct ISteamClient_SteamClient018_GetISteamGameServerStats_params *params = (struct ISteamClient_SteamClient018_GetISteamGameServerStats_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamGameServerStats( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_GetISteamGameServerStats( void *args )
{
    struct wow64_ISteamClient_SteamClient018_GetISteamGameServerStats_params *params = (struct wow64_ISteamClient_SteamClient018_GetISteamGameServerStats_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamGameServerStats( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_GetISteamApps( void *args )
{
    struct ISteamClient_SteamClient018_GetISteamApps_params *params = (struct ISteamClient_SteamClient018_GetISteamApps_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_GetISteamApps( void *args )
{
    struct wow64_ISteamClient_SteamClient018_GetISteamApps_params *params = (struct wow64_ISteamClient_SteamClient018_GetISteamApps_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamApps( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_GetISteamNetworking( void *args )
{
    struct ISteamClient_SteamClient018_GetISteamNetworking_params *params = (struct ISteamClient_SteamClient018_GetISteamNetworking_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamNetworking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_GetISteamNetworking( void *args )
{
    struct wow64_ISteamClient_SteamClient018_GetISteamNetworking_params *params = (struct wow64_ISteamClient_SteamClient018_GetISteamNetworking_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamNetworking( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_GetISteamRemoteStorage( void *args )
{
    struct ISteamClient_SteamClient018_GetISteamRemoteStorage_params *params = (struct ISteamClient_SteamClient018_GetISteamRemoteStorage_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamRemoteStorage( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_GetISteamRemoteStorage( void *args )
{
    struct wow64_ISteamClient_SteamClient018_GetISteamRemoteStorage_params *params = (struct wow64_ISteamClient_SteamClient018_GetISteamRemoteStorage_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamRemoteStorage( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_GetISteamScreenshots( void *args )
{
    struct ISteamClient_SteamClient018_GetISteamScreenshots_params *params = (struct ISteamClient_SteamClient018_GetISteamScreenshots_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamScreenshots( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_GetISteamScreenshots( void *args )
{
    struct wow64_ISteamClient_SteamClient018_GetISteamScreenshots_params *params = (struct wow64_ISteamClient_SteamClient018_GetISteamScreenshots_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamScreenshots( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_GetISteamGameSearch( void *args )
{
    struct ISteamClient_SteamClient018_GetISteamGameSearch_params *params = (struct ISteamClient_SteamClient018_GetISteamGameSearch_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamGameSearch( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_GetISteamGameSearch( void *args )
{
    struct wow64_ISteamClient_SteamClient018_GetISteamGameSearch_params *params = (struct wow64_ISteamClient_SteamClient018_GetISteamGameSearch_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamGameSearch( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_RunFrame( void *args )
{
    struct ISteamClient_SteamClient018_RunFrame_params *params = (struct ISteamClient_SteamClient018_RunFrame_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    iface->RunFrame(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_RunFrame( void *args )
{
    struct wow64_ISteamClient_SteamClient018_RunFrame_params *params = (struct wow64_ISteamClient_SteamClient018_RunFrame_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    iface->RunFrame(  );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_GetIPCCallCount( void *args )
{
    struct ISteamClient_SteamClient018_GetIPCCallCount_params *params = (struct ISteamClient_SteamClient018_GetIPCCallCount_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetIPCCallCount(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_GetIPCCallCount( void *args )
{
    struct wow64_ISteamClient_SteamClient018_GetIPCCallCount_params *params = (struct wow64_ISteamClient_SteamClient018_GetIPCCallCount_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetIPCCallCount(  );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_SetWarningMessageHook( void *args )
{
    struct ISteamClient_SteamClient018_SetWarningMessageHook_params *params = (struct ISteamClient_SteamClient018_SetWarningMessageHook_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_SetWarningMessageHook( void *args )
{
    struct wow64_ISteamClient_SteamClient018_SetWarningMessageHook_params *params = (struct wow64_ISteamClient_SteamClient018_SetWarningMessageHook_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    void (*U_CDECL u_pFunction)(int32_t, const char *) = manual_convert_SetWarningMessageHook_pFunction( params->pFunction );
    iface->SetWarningMessageHook( u_pFunction );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_BShutdownIfAllPipesClosed( void *args )
{
    struct ISteamClient_SteamClient018_BShutdownIfAllPipesClosed_params *params = (struct ISteamClient_SteamClient018_BShutdownIfAllPipesClosed_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->BShutdownIfAllPipesClosed(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_BShutdownIfAllPipesClosed( void *args )
{
    struct wow64_ISteamClient_SteamClient018_BShutdownIfAllPipesClosed_params *params = (struct wow64_ISteamClient_SteamClient018_BShutdownIfAllPipesClosed_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->BShutdownIfAllPipesClosed(  );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_GetISteamHTTP( void *args )
{
    struct ISteamClient_SteamClient018_GetISteamHTTP_params *params = (struct ISteamClient_SteamClient018_GetISteamHTTP_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamHTTP( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_GetISteamHTTP( void *args )
{
    struct wow64_ISteamClient_SteamClient018_GetISteamHTTP_params *params = (struct wow64_ISteamClient_SteamClient018_GetISteamHTTP_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamHTTP( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_DEPRECATED_GetISteamUnifiedMessages( void *args )
{
    struct ISteamClient_SteamClient018_DEPRECATED_GetISteamUnifiedMessages_params *params = (struct ISteamClient_SteamClient018_DEPRECATED_GetISteamUnifiedMessages_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->DEPRECATED_GetISteamUnifiedMessages( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_DEPRECATED_GetISteamUnifiedMessages( void *args )
{
    struct wow64_ISteamClient_SteamClient018_DEPRECATED_GetISteamUnifiedMessages_params *params = (struct wow64_ISteamClient_SteamClient018_DEPRECATED_GetISteamUnifiedMessages_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->DEPRECATED_GetISteamUnifiedMessages( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_GetISteamController( void *args )
{
    struct ISteamClient_SteamClient018_GetISteamController_params *params = (struct ISteamClient_SteamClient018_GetISteamController_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamController( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_GetISteamController( void *args )
{
    struct wow64_ISteamClient_SteamClient018_GetISteamController_params *params = (struct wow64_ISteamClient_SteamClient018_GetISteamController_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamController( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_GetISteamUGC( void *args )
{
    struct ISteamClient_SteamClient018_GetISteamUGC_params *params = (struct ISteamClient_SteamClient018_GetISteamUGC_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamUGC( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_GetISteamUGC( void *args )
{
    struct wow64_ISteamClient_SteamClient018_GetISteamUGC_params *params = (struct wow64_ISteamClient_SteamClient018_GetISteamUGC_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamUGC( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_GetISteamAppList( void *args )
{
    struct ISteamClient_SteamClient018_GetISteamAppList_params *params = (struct ISteamClient_SteamClient018_GetISteamAppList_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamAppList( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_GetISteamAppList( void *args )
{
    struct wow64_ISteamClient_SteamClient018_GetISteamAppList_params *params = (struct wow64_ISteamClient_SteamClient018_GetISteamAppList_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamAppList( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_GetISteamMusic( void *args )
{
    struct ISteamClient_SteamClient018_GetISteamMusic_params *params = (struct ISteamClient_SteamClient018_GetISteamMusic_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamMusic( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_GetISteamMusic( void *args )
{
    struct wow64_ISteamClient_SteamClient018_GetISteamMusic_params *params = (struct wow64_ISteamClient_SteamClient018_GetISteamMusic_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamMusic( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_GetISteamMusicRemote( void *args )
{
    struct ISteamClient_SteamClient018_GetISteamMusicRemote_params *params = (struct ISteamClient_SteamClient018_GetISteamMusicRemote_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamMusicRemote( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_GetISteamMusicRemote( void *args )
{
    struct wow64_ISteamClient_SteamClient018_GetISteamMusicRemote_params *params = (struct wow64_ISteamClient_SteamClient018_GetISteamMusicRemote_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamMusicRemote( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_GetISteamHTMLSurface( void *args )
{
    struct ISteamClient_SteamClient018_GetISteamHTMLSurface_params *params = (struct ISteamClient_SteamClient018_GetISteamHTMLSurface_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamHTMLSurface( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_GetISteamHTMLSurface( void *args )
{
    struct wow64_ISteamClient_SteamClient018_GetISteamHTMLSurface_params *params = (struct wow64_ISteamClient_SteamClient018_GetISteamHTMLSurface_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamHTMLSurface( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( void *args )
{
    struct ISteamClient_SteamClient018_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params *params = (struct ISteamClient_SteamClient018_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    void (*U_CDECL u__a)(void) = manual_convert_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess__a( params->_a );
    iface->DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( u__a );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( void *args )
{
    struct wow64_ISteamClient_SteamClient018_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params *params = (struct wow64_ISteamClient_SteamClient018_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    void (*U_CDECL u__a)(void) = manual_convert_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess__a( params->_a );
    iface->DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess( u__a );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( void *args )
{
    struct ISteamClient_SteamClient018_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params *params = (struct ISteamClient_SteamClient018_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    void (*U_CDECL u__a)(void) = manual_convert_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess__a( params->_a );
    iface->DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( u__a );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( void *args )
{
    struct wow64_ISteamClient_SteamClient018_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params *params = (struct wow64_ISteamClient_SteamClient018_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    void (*U_CDECL u__a)(void) = manual_convert_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess__a( params->_a );
    iface->DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess( u__a );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_Set_SteamAPI_CCheckCallbackRegisteredInProcess( void *args )
{
    struct ISteamClient_SteamClient018_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params *params = (struct ISteamClient_SteamClient018_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    uint32_t (*U_CDECL u_func)(int32_t) = manual_convert_Set_SteamAPI_CCheckCallbackRegisteredInProcess_func( params->func );
    iface->Set_SteamAPI_CCheckCallbackRegisteredInProcess( u_func );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_Set_SteamAPI_CCheckCallbackRegisteredInProcess( void *args )
{
    struct wow64_ISteamClient_SteamClient018_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params *params = (struct wow64_ISteamClient_SteamClient018_Set_SteamAPI_CCheckCallbackRegisteredInProcess_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    uint32_t (*U_CDECL u_func)(int32_t) = manual_convert_Set_SteamAPI_CCheckCallbackRegisteredInProcess_func( params->func );
    iface->Set_SteamAPI_CCheckCallbackRegisteredInProcess( u_func );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_GetISteamInventory( void *args )
{
    struct ISteamClient_SteamClient018_GetISteamInventory_params *params = (struct ISteamClient_SteamClient018_GetISteamInventory_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamInventory( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_GetISteamInventory( void *args )
{
    struct wow64_ISteamClient_SteamClient018_GetISteamInventory_params *params = (struct wow64_ISteamClient_SteamClient018_GetISteamInventory_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamInventory( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_GetISteamVideo( void *args )
{
    struct ISteamClient_SteamClient018_GetISteamVideo_params *params = (struct ISteamClient_SteamClient018_GetISteamVideo_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamVideo( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_GetISteamVideo( void *args )
{
    struct wow64_ISteamClient_SteamClient018_GetISteamVideo_params *params = (struct wow64_ISteamClient_SteamClient018_GetISteamVideo_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamVideo( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_GetISteamParentalSettings( void *args )
{
    struct ISteamClient_SteamClient018_GetISteamParentalSettings_params *params = (struct ISteamClient_SteamClient018_GetISteamParentalSettings_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamParentalSettings( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_GetISteamParentalSettings( void *args )
{
    struct wow64_ISteamClient_SteamClient018_GetISteamParentalSettings_params *params = (struct wow64_ISteamClient_SteamClient018_GetISteamParentalSettings_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamParentalSettings( params->hSteamuser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_GetISteamInput( void *args )
{
    struct ISteamClient_SteamClient018_GetISteamInput_params *params = (struct ISteamClient_SteamClient018_GetISteamInput_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamInput( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_GetISteamInput( void *args )
{
    struct wow64_ISteamClient_SteamClient018_GetISteamInput_params *params = (struct wow64_ISteamClient_SteamClient018_GetISteamInput_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamInput( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

NTSTATUS ISteamClient_SteamClient018_GetISteamParties( void *args )
{
    struct ISteamClient_SteamClient018_GetISteamParties_params *params = (struct ISteamClient_SteamClient018_GetISteamParties_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamParties( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamClient_SteamClient018_GetISteamParties( void *args )
{
    struct wow64_ISteamClient_SteamClient018_GetISteamParties_params *params = (struct wow64_ISteamClient_SteamClient018_GetISteamParties_params *)args;
    struct u_ISteamClient_SteamClient018 *iface = (struct u_ISteamClient_SteamClient018 *)params->u_iface;
    params->_ret = iface->GetISteamParties( params->hSteamUser, params->hSteamPipe, params->pchVersion );
    return 0;
}
#endif

