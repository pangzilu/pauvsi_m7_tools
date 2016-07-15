function [ trajectory, waypoints] = generatePath( targetPos, targetVel, quad )
%GENERATEPATH Summary of this function goes here
%   Generates a path from quad to roomba. It then will make an actuator constrained parmetric trajectory
ROOMBA_PREDICT = 1.0;

%%first predict the position of roomba when arriving
dist = mag(targetPos - quad.pos);
timeToArrival = ROOMBA_PREDICT * dist; % simple linear prediction
%used the time to arrival and target state to predict the final goal
%position
goalPos = targetPos + (targetVel * timeToArrival); %this is the goal pos


end
