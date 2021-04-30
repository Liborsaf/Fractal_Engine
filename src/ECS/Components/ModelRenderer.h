#pragma once

#include "Resource/Resource.h"
#include "ECS/Base/BaseComponent.h"

struct ModelRenderer : public ECS::BaseComponent {
	~ModelRenderer() = default;

	ModelRenderer(): Name("Rock"){
		Renderer = fr::Resource.GetModel(Name);
	}

	ModelRenderer(std::string name): Name(name) {
		Renderer = fr::Resource.GetModel(Name);
	}

	std::string Name;
	std::shared_ptr<Model3D> Renderer;
};