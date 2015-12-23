#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/BRep/BRep_Builder.hxx>
#include <ModelingData/BRepTools/BRepTools.hxx>
#include <ModelingAlgorithms/BRepGProp/BRepGProp.hxx>
#include <Geometry/GProp/GProp_GProps.hxx>
#include <iostream>

int main(int argc, char **argv){
    TopoDS_Shape shape;
    BRep_Builder builder;
    GProp_GProps prop;

    if (argc < 2)
    {
        std::cerr << "Usage: computeSurface file.brep" << std::endl;
        exit(1);
    }
    BRepTools::Read(shape, argv[1], builder);
    BRepGProp::SurfaceProperties(shape, prop);
    std::cout << "Total surface of all shapes: " << prop.Mass() << std::endl;
    return 0;
}
