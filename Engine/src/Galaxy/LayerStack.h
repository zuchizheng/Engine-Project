#pragma once

#include "Galaxy/Core.h"
#include "Layer.h"

#include <vector>

namespace Galaxy {

	class GALAXY_API LayerStack
	{
	public:
		LayerStack();
		~LayerStack();

		void Pushlayer(Layer* layer);
		void PushOverlay(Layer* overlay);
		void Poplayer(Layer* layer);
		void PopOverlay(Layer* overlay);

		std::vector<Layer*>::iterator begin() { return m_Layers.begin(); }
		std::vector<Layer*>::iterator end() { return m_Layers.end(); }
	private:
		std::vector<Layer*> m_Layers;
		std::vector<Layer*>::iterator m_LayerInsert;
	};
}