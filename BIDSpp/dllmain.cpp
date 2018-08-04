// dllmain.cpp : DLL アプリケーションのエントリ ポイントを定義します。
#include "stdafx.h"
#include "ATSPI.h"
#include <iostream>
#include <string>
#include <stdio.h>

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}
using namespace System::Windows::Forms;
//using namespace System::Threading::Tasks;

Hand H;
//パイプのハンドル。一応成功。
HANDLE PSVHandle = CreateNamedPipe("\\\\.\\pipe\\BIDSPipe", PIPE_ACCESS_DUPLEX, PIPE_TYPE_BYTE, 1, 256, 256, 5000, NULL);

DE void Load() {
	MessageBox::Show("Test Msg");
	ConnectNamedPipe(PSVHandle, NULL);
	//PipeSV::LoadP();
}
DE void Dispose() {
	DisconnectNamedPipe(PSVHandle);
	//MessageBox::Show(PipeSV::IsConnected.ToString());
}
DE int GetPluginVersion() {
	return 0x00020000;
}
DE void SetVehicleSpec(Spec s) {
	//PipeSV::SetVehicleSpecCS(s);
}
DE void Initialize(int b) {

}
DE Hand Elapse(State VS, int * P, int * S)
{
	H.C = 0;
	return H;
}
DE void SetPower(int p) {
	H.P = p;
}
DE void SetBrake(int b) {
	H.B = b;
}
DE void SetReverser(int r) {
	H.R = r;
}
DE void KeyDown(int k) {

}
DE void KeyUp(int k) {

}
DE void HornBlow(int k) {

}

DE void DoorOpen() {

}
DE void DoorClose() {

}
DE void SetSignal(int a) {

}
DE void SetBeaconData(Beacon b) {

}

