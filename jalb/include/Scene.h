#ifndef SCENE_H
#define SCENE_H

#include <set>
#include "Macros.h"
#include "Node.h"

NS_JALB_BEGIN

class Scene : public Node
{
	public:
		static Scene* createScene();

		virtual ~Scene();

		void postUpdate() override;

	protected:
		Scene();

		virtual bool init() override;

	private:

};

NS_JALB_END

#endif