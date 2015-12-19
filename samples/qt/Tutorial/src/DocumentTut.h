#ifndef DOCUMENTTUT_H
#define DOCUMENTTUT_H

#include "DocumentCommon.h"
#include <Geometry/Geom/Geom_BSplineSurface.hxx>

class SurfConstruction;
class ApplicationCommon;

class DocumentTut : public DocumentCommon
{
	Q_OBJECT

public:
   DocumentTut( const int, ApplicationCommonWindow* );
	~DocumentTut();

	void                           onMakeBottle();

private:
	SurfConstruction*			         mySurfConstructor;
};

#endif
