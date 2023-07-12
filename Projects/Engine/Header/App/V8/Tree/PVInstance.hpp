#pragma once
#include <App/V8/Tree/Instance.hpp>
#include <App/CoordinateFrame.hpp>

namespace RNR
{
    class PVInstance : public Instance
    {
    protected:
        CoordinateFrame m_cframe;
    public:
        PVInstance();

        CoordinateFrame& getCFrame() { return m_cframe; };
        void setCFrame(CoordinateFrame cframe) { m_cframe = cframe; };

        Ogre::Vector3 getPosition() { return m_cframe.getPosition(); }
        Ogre::Matrix3 getRotation() { return m_cframe.getRotation(); }
    };
}
