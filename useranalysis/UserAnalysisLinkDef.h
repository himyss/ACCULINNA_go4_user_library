#ifdef __CINT__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

// Manager
#pragma link C++ class UserAnalysis+;
#pragma link C++ class UserParameter+;
#pragma link C++ class MeshDummyEvent+;
#pragma link C++ class MeshProviderProc+;

// Unpacking step
#pragma link C++ class UserEventUnpacking+;
#pragma link C++ class UserProcUnpacking+;
#pragma link C++ class UserHistosUnpacking+;

// Raw monitoring step
#pragma link C++ class UserEventRawMonitoring+;
#pragma link C++ class UserProcRawMonitoring+;
#pragma link C++ class UserHistosRawMonitoring+;

// Repacking step
#pragma link C++ class DetEventFull+;
#pragma link C++ class UserProcRepacking+;
#pragma link C++ class UserHistosRepacking+;

// Advanced monitoring step
#pragma link C++ class UserEventAdvMonitoring+;
#pragma link C++ class UserProcAdvMonitoring+;
#pragma link C++ class UserHistosAdvMonitoring+;

// Beam detector monitoring step
#pragma link C++ class UserEventBeamDetMonitoring+;
#pragma link C++ class UserProcBeamDetMonitoring+;
#pragma link C++ class UserHistosBeamDetMonitoring+;
#pragma link C++ class UserParamBeamDetMonitoring+;

// Beam monitoring step 2
#pragma link C++ class UserEventBeamMonitoring2+;
#pragma link C++ class UserProcBeamMonitoring2+;
#pragma link C++ class UserHistosBeamMonitoring2+;
#pragma link C++ class UserParameterBeamDetector+;

// testmonitoring step
#pragma link C++ class UserEventTestMonitoring+;
#pragma link C++ class UserProcTestMonitoring+;
#pragma link C++ class UserHistosTestMonitoring+;
#pragma link C++ class UserParameterTest+;
// Calibration paramters
#pragma link C++ class SiCalibPars+;

// Learn step
#pragma link C++ class UserEventLearn+;
#pragma link C++ class UserProcLearn+;

// DigiBuilding step
#pragma link C++ class UserEventDigiBuilding+;
#pragma link C++ class UserProcDigiBuilding+;

#endif // __CINT__
