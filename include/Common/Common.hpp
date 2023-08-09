#pragma once

#include <Standard_Handle.hxx>
#include <NCollection_Vector.hxx>
#include <V3d_View.hxx>
#include <AIS_InteractiveObject.hxx>

#include <tuple>

#pragma comment(lib, "OccViewer.ViewerProxy.lib")
#pragma comment(lib, "TKernel.lib")
#pragma comment(lib, "TKMath.lib")
#pragma comment(lib, "TKBRep.lib")
#pragma comment(lib, "TKXSBase.lib")
#pragma comment(lib, "TKService.lib")
#pragma comment(lib, "TKV3d.lib")
#pragma comment(lib, "TKOpenGl.lib")
#pragma comment(lib, "TKD3dHost.lib")
#pragma comment(lib, "TKLCAF.lib")
#pragma comment(lib, "TKTopAlgo.lib")
#pragma comment(lib, "TKG3d.lib")
#pragma comment(lib, "TKGeomAlgo.lib")

namespace OccEasyDrawing
{
	using AISObjects = NCollection_Vector<Handle(AIS_InteractiveObject)>;

	struct ViewerHandles
	{
		Handle(V3d_View) View;
		Handle(AIS_InteractiveContext) Context;
	};
}