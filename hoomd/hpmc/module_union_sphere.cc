// Copyright (c) 2009-206 The Regents of the University of Michigan
// This file is part of the HOOMD-blue project, released under the BSD 3-Clause License.

// Include the defined classes that are to be exported to python
#include "IntegratorHPMC.h"
#include "IntegratorHPMCMono.h"
#include "IntegratorHPMCMonoImplicit.h"
#include "IntegratorHPMCMonoImplicitNew.h"
#include "ComputeFreeVolume.h"
#include "AnalyzerSDF.h"

#include "ShapeUnion.h"

#include "ExternalField.h"
#include "ExternalFieldWall.h"
#include "ExternalFieldLattice.h"
#include "ExternalFieldComposite.h"
#include "ExternalCallback.h"

#include "UpdaterExternalFieldWall.h"
#include "UpdaterRemoveDrift.h"
#include "UpdaterMuVT.h"
#include "UpdaterMuVTImplicit.h"

#ifdef ENABLE_CUDA
#include "IntegratorHPMCMonoGPU.h"
#include "IntegratorHPMCMonoImplicitGPU.h"
#include "IntegratorHPMCMonoImplicitNewGPU.h"
#include "ComputeFreeVolumeGPU.h"
#endif

namespace py = pybind11;

using namespace hpmc;

using namespace hpmc::detail;

namespace hpmc
{

//! Export the base HPMCMono integrators
void export_union_sphere(py::module& m)
    {
    export_IntegratorHPMCMono< ShapeUnion<ShapeSphere> >(m, "IntegratorHPMCMonoSphereUnion");
    export_IntegratorHPMCMonoImplicit< ShapeUnion<ShapeSphere> >(m, "IntegratorHPMCMonoImplicitSphereUnion");
    export_IntegratorHPMCMonoImplicitNew< ShapeUnion<ShapeSphere> >(m, "IntegratorHPMCMonoImplicitNewSphereUnion");
    export_ComputeFreeVolume< ShapeUnion<ShapeSphere> >(m, "ComputeFreeVolumeSphereUnion");
    // export_AnalyzerSDF< ShapeUnion<ShapeSphere, , > >(m, "AnalyzerSDFSphereUnion");
    export_UpdaterMuVT< ShapeUnion<ShapeSphere> >(m, "UpdaterMuVTSphereUnion");
    export_UpdaterMuVTImplicit< ShapeUnion<ShapeSphere>, IntegratorHPMCMonoImplicit<ShapeUnion<ShapeSphere> > >(m, "UpdaterMuVTImplicitSphereUnion");
    export_UpdaterMuVTImplicit< ShapeUnion<ShapeSphere>, IntegratorHPMCMonoImplicitNew<ShapeUnion<ShapeSphere> > >(m, "UpdaterMuVTImplicitNewSphereUnion");

    export_ExternalFieldInterface<ShapeUnion<ShapeSphere> >(m, "ExternalFieldSphereUnion");
    export_LatticeField<ShapeUnion<ShapeSphere> >(m, "ExternalFieldLatticeSphereUnion");
    export_ExternalFieldComposite<ShapeUnion<ShapeSphere> >(m, "ExternalFieldCompositeSphereUnion");
    export_RemoveDriftUpdater<ShapeUnion<ShapeSphere> >(m, "RemoveDriftUpdaterSphereUnion");
    export_ExternalFieldWall<ShapeUnion<ShapeSphere> >(m, "WallSphereUnion");
    export_UpdaterExternalFieldWall<ShapeUnion<ShapeSphere> >(m, "UpdaterExternalFieldWallSphereUnion");
    export_ExternalCallback<ShapeUnion<ShapeSphere> >(m, "ExternalCallbackSphereUnion");

    #ifdef ENABLE_CUDA

    export_IntegratorHPMCMonoGPU< ShapeUnion<ShapeSphere> >(m, "IntegratorHPMCMonoGPUSphereUnion");
    export_IntegratorHPMCMonoImplicitGPU< ShapeUnion<ShapeSphere> >(m, "IntegratorHPMCMonoImplicitGPUSphereUnion");
    export_IntegratorHPMCMonoImplicitNewGPU< ShapeUnion<ShapeSphere> >(m, "IntegratorHPMCMonoImplicitNewGPUSphereUnion");
    export_ComputeFreeVolumeGPU< ShapeUnion<ShapeSphere> >(m, "ComputeFreeVolumeGPUSphereUnion");

    #endif
    }

}
