#ifdef __CINT__
/* Copyright(c) 1998-1999, ALICE Experiment at CERN, All rights reserved. *
 * See cxx source for full Copyright notice                               */

/* $Id$ */

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;
//#pragma link C++ enum   Cluster_t;

//#pragma link C++ global gITSdisplay;  // global used by AliITSdisplay

// Standard ITS classes 

#pragma link C++ class  AliITSClusterFinder+;
#pragma link C++ class  AliITSRecPoint+;
#pragma link C++ class AliITSRecoParam+;
#pragma link C++ class  AliITSDetTypeRec+;
#pragma link C++ class  AliITSclusterV2+; 
#pragma link C++ class  AliITSdigit+;
#pragma link C++ class  AliITSdigitSPD+;
#pragma link C++ class  AliITSdigitSDD+;
#pragma link C++ class  AliITSdigitSSD+;
#pragma link C++ class  AliITSTransientDigit+;
#pragma link C++ class  AliITSInitGeometry+;
#pragma link C++ class  AliITSgeom+;
#pragma link C++ class  AliITSgeomTGeo+;
#pragma link C++ class  AliITSgeomMatrix-;

#pragma link C++ class AliITSClusterFinderV2SPD+;
#pragma link C++ class AliITSReconstructor+;
#pragma link C++ class  AliITSRecPointContainer+;
#pragma link C++ class AliITSClusterFinderV2SDD+;
#pragma link C++ class AliITSClusterFinderSDDfast+;
#pragma link C++ class AliITSClusterFinderV2SSD+;
#pragma link C++ class AliITStrackerMI+;
#pragma link C++ class AliITStrackMI+;
#pragma link C++ class AliITStrackV2+;
#pragma link C++ class AliITStrackerV2+;
#pragma link C++ class AliITStrackerSA+;
#pragma link C++ class AliITSVertexerFast+;
#pragma link C++ class  AliITSVertexer+;
#pragma link C++ class AliITSVertexerFixed+;
#pragma link C++ class  AliITSVertexer3D+;
#pragma link C++ class  AliITSVertexerZ+;
#pragma link C++ class  AliITSVertexerZD+;
#pragma link C++ class  AliITSVertexerCosmics+;
#pragma link C++ class AliITSMultReconstructor+;
#pragma link C++ class  AliITSClusterParam+;
#pragma link C++ class AliITSV0Finder+;
#pragma link C++ class AliITSclusterTable+;
#pragma link C++ class AliITStrackSA+;
#pragma link C++ class  AliITSSortTrkl+;
#pragma link C++ class  AliITSTracklPairs+;
#pragma link C++ class  AliITSZPoint+;
#pragma link C++ class AliITSQAChecker+;
#pragma link C++ class AliITSQASPDChecker+;
#pragma link C++ class AliITSQASDDChecker+;
#pragma link C++ class AliITSQASSDChecker+;
#pragma link C++ class AliITSQADataMakerRec+;
#pragma link C++ class AliITSQASPDDataMakerRec+;
#pragma link C++ class AliITSQASDDDataMakerRec+;
#pragma link C++ class AliITSQASSDDataMakerRec+;


#pragma link C++ class  AliITSMap+;
#pragma link C++ class  AliITSMapA1+;
#pragma link C++ class  AliITSMapA2+;
#pragma link C++ class  AliITSMisAligner+;
#pragma link C++ class  AliITSsegmentation+;
#pragma link C++ class  AliITSsegmentationSPD+;
#pragma link C++ class  AliITSsegmentationSDD+;
#pragma link C++ class  AliITSsegmentationSSD+;
#pragma link C++ class  AliITSCalibration+;
#pragma link C++ class  AliITSresponse+;
#pragma link C++ class  AliITSresponseSPD+;
#pragma link C++ class  AliITSresponseSDD+;
#pragma link C++ class  AliITSCalibrationSPD-;
#pragma link C++ class  AliITSCalibrationSDD+;
#pragma link C++ class  AliITSCalibrationSSD+;
#pragma link C++ class  AliITSChannelStatus+;
#pragma link C++ class  AliITSHLTforSDD+;
#pragma link C++ class  AliITSMapSDD+;
#pragma link C++ class  AliITSCorrMapSDD+;
#pragma link C++ class  AliITSCorrMap1DSDD+;
#pragma link C++ class  AliITSCorrMap2DSDD+;
#pragma link C++ class  AliITSDriftSpeedSDD+;
#pragma link C++ class  AliITSDriftSpeedArraySDD+;
#pragma link C++ class  AliITSDDLModuleMapSDD+;
#pragma link C++ class  AliITSBadChannelsSSD+;
#pragma link C++ class  AliITSBadChannelsSSDv2+;
#pragma link C++ class  AliITSGainSSD+;
#pragma link C++ class  AliITSGainSSDv2+;
#pragma link C++ class  AliITSNoiseSSD+;
#pragma link C++ class  AliITSNoiseSSDv2+;
#pragma link C++ class AliITSFOSignalsSPD+;

#ifdef ALI_DATE
#pragma link C++ class  AliITSHandleDaSSD+;
#endif

#pragma link C++ class  AliITSModuleDaSSD+;
#pragma link C++ class  AliITSChannelDaSSD+;
#pragma link C++ class  AliITSpList+;
#pragma link C++ class  AliITSpListItem+;
#pragma link C++ class  AliITSPlaneEff+;
#pragma link C++ class  AliITSPlaneEffSPD+;
#pragma link C++ class  AliITSPlaneEffSDD+;
#pragma link C++ class  AliITSPlaneEffSSD+;
#pragma link C++ class  AliITSDCSAnalyzerSDD+;
#pragma link C++ class  AliITSDCSDataSDD+;

//
// Raw data
#pragma link C++ class AliITSDDLRawData+;

#pragma link C++ class AliITSLoader+;

#pragma link C++ class AliITSRawStream+;
#pragma link C++ class AliITSRawStreamSDD+;
#pragma link C++ class AliITSRawStreamSDDCompressed+;
#pragma link C++ class AliITSCompressRawDataSDD+;
#pragma link C++ class AliITSRawStreamSPD+;
#pragma link C++ class AliITSRawStreamSSD+;
#pragma link C++ class AliITSRawStreamSSDv1+;
#pragma link C++ class AliITSEventHeader+;
#pragma link C++ class AliITSRawStreamSPDErrorLog+;

#pragma link C++ class AliITSIntMap+;
#pragma link C++ class AliITSIntMapNode+;
#pragma link C++ class AliITSPedestalSSD+;
#pragma link C++ class AliITSPedestalSSDv2+;
#pragma link C++ class AliITSSurveyToAlign+;
#pragma link C++ class AliITSTriggerConditions+;
#pragma link C++ class AliITSTriggerAlgorithmConditions+;
#pragma link C++ class AliITSdEdxSamples+;

#endif
