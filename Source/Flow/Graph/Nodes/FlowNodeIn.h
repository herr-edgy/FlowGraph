#pragma once

#include "FlowNode.h"
#include "FlowNodeIn.generated.h"

/**
 * In
 */
UCLASS(NotPlaceable, meta = (DisplayName = "In"))
class FLOW_API UFlowNodeIn : public UFlowNode
{
	GENERATED_UCLASS_BODY()
	
#if WITH_EDITOR
public:
	virtual bool HasInputPins() const override { return false; }
#endif
};