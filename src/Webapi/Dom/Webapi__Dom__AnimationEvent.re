type t = Dom.animationEvent;

include Webapi__Dom__Event.Impl({ type nonrec t = t; });

[@bs.new] external make : string => t = "AnimationEvent";
[@bs.new] external makeWithOptions : (string, Js.t({..})) => t = "AnimationEvent";

[@bs.get] external animationName : t => string = "animationName";
[@bs.get] external elapsedTime : t => float = "elapsedTime";
[@bs.get] external pseudoElement : t => string /* enum-ish */ = "pseudoElement";
