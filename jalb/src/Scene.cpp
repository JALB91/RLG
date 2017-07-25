#include "Scene.h"
#include "Director.h"


NS_JALB_BEGIN


Scene* Scene::createScene()
{
	Scene* scene = new Scene();

	if (scene && scene->init())
	{
		return scene;
	}

	delete scene;

	return nullptr;
}

bool Scene::init()
{
	if (!Node::init())
	{
		return false;
	}

	schedulePostUpdate();

	return true;
}

Scene::Scene() : Node()
{

}

Scene::~Scene()
{
	
}


void Scene::postUpdate()
{
	this->draw();
}


NS_JALB_END