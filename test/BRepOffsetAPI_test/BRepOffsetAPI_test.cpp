#include <ModelingAlgorithms/BRepLib/BRepLib_MakePolygon.hxx>
#include <ModelingAlgorithms/BRepPrimAPI/BRepPrimAPI_MakeBox.hxx>
#include <ModelingAlgorithms/BRepOffsetAPI/BRepOffsetAPI_MakeEvolved.hxx>
#include <ModelingAlgorithms/BRepOffsetAPI/BRepOffsetAPI_MakeOffsetShape.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Geometry/GeomAbs/GeomAbs_JoinType.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <gtest/gtest.h>

TEST(BRepOffsetAPITestSuite, testEvolvedShape)
{
    BRepLib_MakePolygon P;
    P.Add(gp_Pnt(0.,0.,0.));
    P.Add(gp_Pnt(200.,0.,0.));
    P.Add(gp_Pnt(200.,200.,0.));
    P.Add(gp_Pnt(0.,200.,0.));
    P.Add(gp_Pnt(0.,0.,0.));
    BRepLib_MakePolygon wprof(gp_Pnt(0.,0.,0.),gp_Pnt(-60.,-60.,-200.));
    BRepOffsetAPI_MakeEvolved S(P.Wire(),wprof.Wire(),GeomAbs_Arc,Standard_True,Standard_False,Standard_True,0.0001);
    S.Build();
    ASSERT_TRUE(S.IsDone());
}

TEST(BRepOffsetAPITestSuite, testOffsetBox)
{
    BRepPrimAPI_MakeBox b(gp_Pnt(-100,-60,-80),150,200,170);
    b.Build();
    TopoDS_Shape b_shape = b.Shape();
    BRepOffsetAPI_MakeOffsetShape offsetA(b_shape,60,0.01);
    ASSERT_TRUE(offsetA.IsDone());
}

int main(int argc, char **argv){
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
