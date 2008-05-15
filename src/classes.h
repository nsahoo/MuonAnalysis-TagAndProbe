
#include "MuonAnalysis/TagAndProbe/interface/CandidateAssociation.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/RefToBase.h"

namespace
{
   namespace
   {

      reco::CandViewCandViewAssociation a1;
      reco::CandViewCandViewAssociation::const_iterator it1;
      edm::Wrapper< reco::CandViewCandViewAssociation > w1;
      edm::helpers::KeyVal< edm::View< reco::Candidate >, edm::View< reco::Candidate > > k1;

   }
}
