#pragma once
#include <App/V8/Tree/PVInstance.hpp>
#include <OGRE/Ogre.h>

#define STUD_HEIGHT 1.18

namespace RNR
{
    class BasePart : public PVInstance, public Ogre::Renderable
    {
        Ogre::MaterialPtr m_material;
        Ogre::Matrix4 m_matrix;
        Ogre::Vector3 m_position;
        Ogre::LightList m_nearbyLights;
        Ogre::Vector3 m_size;
        Ogre::Vector4 m_color;
        static Ogre::MeshPtr m_partMesh;
    public:
        BasePart();

        void updateMatrix();

        void setSize(Ogre::Vector3 size) { m_size = size; }
        Ogre::Vector3 getSize() { return m_size; }
        Ogre::Vector4 getColor() { return m_color; }

        virtual const Ogre::MaterialPtr& getMaterial() const;
        virtual void getRenderOperation(Ogre::RenderOperation& op);
        virtual Ogre::Real getSquaredViewDepth(const Ogre::Camera* cam) const;
        virtual const Ogre::LightList& getLights() const;
        virtual void getWorldTransforms(Ogre::Matrix4* xform) const;
    };
}