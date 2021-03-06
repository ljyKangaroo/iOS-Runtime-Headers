/* Generated by RuntimeBrowser.
 */

@protocol GEOComposedRouteObserver <NSObject>

@required

- (void)composedRoute:(GEOComposedRoute *)arg1 changedSelectedRideInClusteredLeg:(GEOComposedTransitTripRouteLeg *)arg2 fromIndex:(unsigned int)arg3 toIndex:(unsigned int)arg4;
- (void)composedRoute:(GEOComposedRoute *)arg1 selectedSections:(NSArray *)arg2 deselectedSections:(NSArray *)arg3;
- (void)composedRouteUpdatedSnappedPaths:(GEOComposedRoute *)arg1;
- (void)composedRouteUpdatedTraffic:(GEOComposedRoute *)arg1;

@end
